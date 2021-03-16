#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
struct location{
    int first,second;
};
int N,M;
int map[1001][1001];
int visited[1000][1000];
queue<location> v;
queue<location> q;
int cnt;
int check;

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void bfs(int now_x,int now_y){
    map[now_x][now_y]=0;
    visited[now_x][now_y]=check+1;
    q.push({now_x,now_y});
    while(q.empty()==0){
        int a=q.front().first;
        int b=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int x=a+dx[i];
            int y=b+dy[i];
            if(x>=0 && y>=0 && x<N && y<M && visited[x][y]==check){
                visited[x][y]=check+1;
                map[x][y]=min(map[x][y],map[a][b]+1);
                q.push({x,y});
            }
        }
    }
}
int main(void){
    cin >> M >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> map[i][j];
            if(map[i][j]==1){
                v.push({i,j});
                cnt++;
            }
            if(map[i][j]==-1){
                visited[i][j]=-1;
            }
            if(map[i][j]==0){
                map[i][j]=1000000;
            }
        }
    }
    while(v.empty()==0){
        int x_1=v.front().first;
        int y_1=v.front().second;
        v.pop();
        bfs(x_1,y_1);
        // for(int i=0; i<N; i++){
        //     for(int j=0; j<M; j++){
        //         if(visited[i][j]!=-1){
        //             visited[i][j]=0;
        //         }
        //     }
        // }//100만번
        check++;
    }//100만번
    int maximum=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(map[i][j]==1000000){
                cout << -1 << endl;
                return 0;
            }
            else{
                maximum=max(maximum,map[i][j]);
            }
        }
    }
    cout << maximum << endl;
    return 0;
}