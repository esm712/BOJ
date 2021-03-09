#include<iostream>
#include<algorithm>
using namespace std;
int T;
long long int check(int num){
    long long int past[10]={1,1,1,1,1,1,1,1,1,1};
    for(int k=0; k<num; k++){
        long long int now[10]={0,};
        for(int i=0; i<10; i++){
            for(int j=i; j<10; j++){
                now[i]+=past[j];
            }
        }
        for(int i=0; i<10; i++){
            past[i]=now[i];
        }
    }
    return past[0];
}
int main(void){
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        int n;
        scanf("%d",&n);
        printf("%lld\n",check(n));
    }
}