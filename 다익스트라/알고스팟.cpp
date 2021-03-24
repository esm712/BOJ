#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int N,M;
int map[101][101];
int room[101][101];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int main(void){
    scanf("%d %d",&M,&N);
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%1d",&map[i][j]);
        }
    }
    
}