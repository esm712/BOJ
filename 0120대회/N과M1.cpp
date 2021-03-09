#include<iostream>
#include<algorithm>
using namespace std;
int check[100000];
int answer[100000];
int N, M;
void permutation(int location, int n){
    if(location==M){
        for(int i=0; i<M; i++){
            printf("%d ",answer[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++){
        if(check[i]==0){
            check[i]=1;
            answer[location]=i;
            permutation(location+1,n);
            check[i]=0;
            answer[location]=0;
        }
    }
}

int main(void){
    scanf("%d %d",&N, &M);
    permutation(0,N);
}