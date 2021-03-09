#include<iostream>
#include<algorithm>
using namespace std;
int T,W;
int dp[31];
int arr[1001];
int main(void){
    scanf("%d %d",&T,&W);
    int pastnum=1;
    arr[0]=1;
    arr[T+1]=0;
    for(int i=1; i<=T; i++){
        scanf("%d",&arr[i]);//자두가 떨어지는 나무
    }
    int cnt=0;
    int check=0;
    for(int i=1; i<=T+1; i++){
        if(arr[i-1]==arr[i]){
            cnt++;
        }
        else{
            dp[check]=cnt;
            check++;
            cnt=1;
        }
    }
    for(int i=0; i<check; i++){
        printf("%d ",dp[i]);
    }
    printf("\n");
    int sum=0;
    sort(dp,dp+check);
    for(int i=check-W-1; i<check; i++){
        sum+=dp[i];
    }
    printf("%d",sum);
}