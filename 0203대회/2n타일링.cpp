#include<iostream>
#include<algorithm>
using namespace std;
int n;
int dp[1001];
int check(int num){
    if(num==1) return 1;
    if(num==2) return 3;
    if(dp[num]!=0) return dp[num];
    return dp[num]=(check(num-1)+2*check(num-2))%10007;
}
int main(void){
    scanf("%d",&n);
    printf("%d",check(n));
}