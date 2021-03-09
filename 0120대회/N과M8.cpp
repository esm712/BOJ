#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int arr[10];
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
        answer[location]=arr[i-1];
        permutation(i-1, location+1);
        answer[location]=0;
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