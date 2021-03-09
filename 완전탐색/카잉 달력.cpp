#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int check=0;
        int M, N, x, y;
        scanf("%d %d %d %d",&M,&N,&x,&y);
        x-=1;//나머지 연산값이 0이 되면 안되므로 1을 뺌
        y-=1;
        for(int j=x; j<M*N/gcd(M,N); j+=M){
            if(j%N==y){
                check=1;
                printf("%d\n",j+1);
                break;
            }
        }//x를 고정시키고 M씩 증가시킴
        if(check==0){
            printf("-1\n");
        }
    }
}