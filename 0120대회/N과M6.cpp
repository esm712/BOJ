#include<iostream>
#include<algorithm>
using namespace std;
int N, M;
int arr[9];
int check[10];
int answer[10];

void permutation(int n, int location){
    if(location==M){
        for(int i=0; i<M; i++){
            printf("%d ",answer[i]);
        }
        printf("\n");
        return;
    }
    for(int i=n+1; i<=N; i++){
        if(check[i]==0){
            check[i]=1;
            answer[location]=arr[i-1];
            permutation(i,location+1);
            answer[location]=0;
            check[i]=0;
        }
    }
}
int main(void){
    scanf("%d %d",&N,&M);
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+N);
    permutation(0,0);
}