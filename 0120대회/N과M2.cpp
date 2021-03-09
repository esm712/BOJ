#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int answer[100000];
int check[100000];

void go(int index, int location){
    if(location==M){
        for(int i=0; i<M; i++){
            printf("%d ",answer[i]);
        }
        printf("\n");
        return;
    }
    for(int i=index+1; i<=N; i++){
        if(check[i]==0){
            check[i]=1;
            answer[location]=i;
            go(i,location+1);
            check[i]=0;
            answer[location]=0;
        }
    }
    return;
}

int main(void){
    scanf("%d %d",&N,&M);
    go(0,0);
}