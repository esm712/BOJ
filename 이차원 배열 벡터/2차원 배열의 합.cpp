#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int v[n][m]={0,};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&v[i][j]);
        }
    }
    int num;
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        long long int sum=0;
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        for(int j=a-1;j<c;j++){
            for(int k=b-1; k<d; k++){
                sum+=v[j][k];
            }
        }
        printf("%lld\n",sum);
    }
}