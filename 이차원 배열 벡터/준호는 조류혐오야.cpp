#include<iostream>
#include<algorithm>
using namespace std;

int check(int num){
    int sum=0;
    while(1){
        if(num%10==9){
            sum++;
        }
        if(num/10==0){
            break;
        }
        num/=10;
    }
    return sum;
}
int main(void){
    int n, m;
    scanf("%d %d",&n,&m);
    int binggo[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&binggo[i][j]);
        }
    }
    int count[n+m];
    for(int i=0; i<n; i++){
        int row=0;
        for(int j=0; j<m; j++){
            row+=check(binggo[i][j]);
        }
        count[i]=row;
    }
    for(int i=0; i<m; i++){
        int col=0;
        for(int j=0; j<n; j++){
            col+=check(binggo[j][i]);
        }
        count[n+i]=col;
    }
    int answer=0;
    int large=0;
    for(int i=0; i<n; i++){
        answer+=count[i];
    }
    for(int i=0; i<n+m; i++){
        if(large<count[i]){
            large=count[i];
        }
    }
    printf("%d\n",answer-large);
}