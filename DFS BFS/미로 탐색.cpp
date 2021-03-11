#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

struct pos{
    int first, second;
};
queue<pos> q;
int N, M;
int arr[100][100];
int visited[100][100];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int num=1;

void bfs(int now_x,int now_y,int end_x, int end_y){
    visited[now_x][now_y]=1;
    q.push({now_x,now_y});
    while(q.empty()==0){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int a=x+dx[i];
            int b=y+dy[i];
            if(a>=0 && b>=0 && a<N && b<M && visited[a][b]==0){
                visited[a][b]=1;
                arr[a][b]=arr[x][y]+1;
                q.push({a,b});
            }
        }
    }
}
int main(void){
    cin >> N >> M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%1d",&arr[i][j]);//1개의 정수를 따로 따로 입력받는 방법이 생각이 안난다.
            if(arr[i][j]==0){
                visited[i][j]=-1;
            }
        }
    }
    bfs(0,0,N,M);
    cout << arr[N-1][M-1];
}