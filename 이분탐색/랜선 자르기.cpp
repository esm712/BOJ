#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
long long int arr[10001];

int check(long long int left, long long int right, int num){
    int sum=0;
    long long int mid=(left+right)/2;
    for(int i=0; i<n; i++){
        sum+=arr[i]/mid;
    }
    if(left>right){
        return mid;
    }
    if(sum>=num){
        return check(mid+1,right,num);
    }
    else{
        return check(left,mid-1,num);
    }
}
int main(void){
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n);
    printf("%d",check(1,arr[n-1],m));
}