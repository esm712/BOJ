#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int n;
    scanf("%d",&n);
    int v[n][5];
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&v[i][j]);
        }
    }
    int sum[n]={0,};
    for(int i=0; i<n; i++){
        int check[n]={0,};
        for(int j=0; j<5; j++){
            for(int k=0; k<n; k++){
                if(v[i][j]==v[k][j]){
                    check[k]=1;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(check[i]==1){
                sum[i]++;
            }
        }
    }
    int answer;
    int person=0;
    for(int i=0; i<n; i++){
        if(sum[i]>person){
            person=sum[i];
            answer=i+1;
        }
    }
    printf("%d",answer);
}