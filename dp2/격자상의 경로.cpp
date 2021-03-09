#include<iostream>
#include<algorithm>
using namespace std;
int N,M,K;
int arr[20][20];
int main(void){
    scanf("%d %d %d",&N,&M,&K);
    int x=K/M+1;
    int y;
    if(K%M==0){
        y=M;
        x--;
    }
    else{
        y=K%M;
    }
    arr[0][1]=1;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    if(K==0){
        printf("%d",arr[N][M]);
        return 0;
    }
    else{
        printf("%d",arr[x][y]*arr[N-x+1][M-y+1]);
        return 0;
    }
}