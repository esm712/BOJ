#include<iostream>
#include<algorithm>
using namespace std;
long long int T;
long long int check(long long int left, long long int right, long long int num){
    long long int mid=(left+right)/2;
    if(left>right){
        return mid;
    }
    long long int number=mid*(mid+1)/2;
    if(number<=num){
        return check(mid+1,right,num); 
    }
    else{
        return check(left,mid-1,num);
    }
}
int main(void){
    scanf("%lld",&T);
    for(int i=0; i<T; i++){
        long long int a;
        scanf("%lld",&a);
        printf("%d\n",check(1,1e9,a));
    }
}