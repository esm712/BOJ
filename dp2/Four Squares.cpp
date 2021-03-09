#include<iostream>
#include<algorithm>
using namespace std;
int arr[300];
int dp[50001];
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=300; i++){
        arr[i]=i*i;
    }
    dp[1]=1;
    for(int i=2; i<=50000; i++){
        dp[i]=500000;
        for(int j=1; j<=300; j++){
            if(i<arr[j]){
                break;
            }
            dp[i]=min(dp[i-arr[j]]+1,dp[i]);   
        }
    }
    printf("%d",dp[n]);
}