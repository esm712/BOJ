#include<iostream>
#include<algorithm>
using namespace std;
int n;
long long int past[10]={1,1,1,1,1,1,1,1,1,1};
long long int arr[1001];
int check(int num){
    long long int now[10]={0,};
    long long int sum=0;
    for(int i=0; i<10; i++){
        sum+=past[i];
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<=i; j++){
            now[i]+=past[j];
        }
    }
    for(int i=0; i<10; i++){
        past[i]=now[i]%10007;
    }
    return sum%10007;
}

int main(void){
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        arr[i]=check(i);
    }
    printf("%lld",arr[n]);
}
