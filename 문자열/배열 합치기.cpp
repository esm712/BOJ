#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
    int N, M;
    scanf("%d %d",&N,&M);

    int A[N+M];

    for(int i=0; i<N+M; i++){
        scanf("%d",&A[i]);
    }
    sort(A,A+N+M);

    for(int i=0; i<N+M; i++){
        printf("%d ",A[i]);
    }
    return 0;
}