#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int answer[100000];
int check[100000];

void go(int index, int n){
    if(index==M){
        for(int i=0; i<M; i++){
            printf("%d ",answer[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++){
        answer[index]=i;
        go(index+1,n);
        answer[index]=0;
    }
    return;
}

int main(void){
    scanf("%d %d",&N,&M);
    go(0,N);
}