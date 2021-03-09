#include<iostream>
#include<algorithm>
using namespace std;
int dp[20];
int main(void){
    int N;
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        int T, P;
        scanf("%d %d",&T,&P);
        if(dp[i]>dp[i+1]){
            dp[i+1]=dp[i];
        }
        if(dp[i+T]<dp[i]+P){
            dp[i+T]=dp[i]+P;
        }
    }
    printf("%d",dp[N]);
}