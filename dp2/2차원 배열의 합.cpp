#include<iostream>
#include<algorithm>
using namespace std;
int N,M;
int K;
long long int arr[301][301];
int main(void){
    scanf("%d %d",&N,&M);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            scanf("%lld",&arr[i][j]);
        }
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            arr[i][j]=arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1]+arr[i][j];
        }
    }
    scanf("%d",&K);
    for(int a=0; a<K; a++){
        int i,j,x,y;
        scanf("%d %d %d %d",&i,&j,&x,&y);
        printf("%lld\n",arr[x][y]-arr[i-1][y]-arr[x][j-1]+arr[i-1][j-1]);
    }
}