#include<iostream>
#include<algorithm>
using namespace std;
int dp[1001][3];
int N;
int main(void){
    scanf("%d",&N);
    int answer=0;
    for(int i=1; i<=N; i++){
        int R,G,B;
        scanf("%d %d %d",&R,&G,&B);
        dp[i][0]=min(dp[i-1][1],dp[i-1][2])+R;
        dp[i][1]=min(dp[i-1][0],dp[i-1][2])+G;
        dp[i][2]=min(dp[i-1][0],dp[i-1][1])+B;
        answer=min(dp[i][0],dp[i][1]);
        answer=min(dp[i][2],answer);
    }
    printf("%d",answer);
}