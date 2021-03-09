#include<iostream>
#include<algorithm>
using namespace std;
int N, M;
int check[100000];
int answer[100000];

void go(int index, int location){
    if(location==M){
        for(int i=0; i<M; i++){
            printf("%d ",answer[i]);
        }
        printf("\n");
        return;
    }
    for(int i=index+1; i<=N; i++){
        answer[location]=i;
        go(i-1,location+1);
        answer[location]=0;
    }
}

int main(void){
    scanf("%d %d",&N,&M);
    go(0,0);
}