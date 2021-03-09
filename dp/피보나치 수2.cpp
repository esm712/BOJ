#include<iostream>
#include<algorithm>
using namespace std;
int n;
long long int arr[91];
long long int fibo(int num){
    if(num==0 || num==1){
        return arr[num];
    }
    if(arr[num]>0){
        return arr[num];
    }
    else{
        return arr[num]=fibo(num-1)+fibo(num-2);
    }
}
int main(void){
    scanf("%d",&n);
    arr[0]=0;
    arr[1]=1;
    printf("%lld",fibo(n));
}