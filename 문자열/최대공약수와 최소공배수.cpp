#include<iostream>
#include<algorithm>

using namespace std;

long long int gcd(long long int a,long long int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(void){
    long long int a, b;
    scanf("%lld %lld",&a,&b);

    if(a<b){
        long long int tmp;
        tmp=a;
        a=b;
        b=tmp;
    }
    long long int c=gcd(a,b);
    long long int d=a/gcd(a,b);
    long long int e=b/gcd(a,b);

    printf("%lld\n",c*d*e);
}