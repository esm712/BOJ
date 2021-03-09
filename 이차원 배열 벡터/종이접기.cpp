#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    long long int n;
    scanf("%lld",&n);
    long long int num;
    num=n*n;
    long long int sum=0;
    for(long long int i=0; i<num; i++){
        long long int a=0;
        scanf("%lld",&a);
        sum+=a;
    }
    printf("%lld\n",sum);
}