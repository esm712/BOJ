#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<string>
using namespace std;
int N,M;
int map[101][101];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

void dijkstra(){
    int distance[101][101];
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            distance[i][j]=1e9;
        }
    }
    distance[0][0]=0;
    queue<pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int now_x = x + dx[i];
            int now_y = y + dy[i];
            if(now_x>=0 && now_y>=0 && now_x<N && now_y<M){
                if(map[now_x][now_y]==1){
                    if(distance[now_x][now_y] > distance[x][y]+1){
                        distance[now_x][now_y] = distance[x][y]+1;
                        q.push({now_x,now_y});
                    }
                }
                else{
                    if(distance[now_x][now_y] > distance[x][y]){
                        distance[now_x][now_y] = distance[x][y];
                        q.push({now_x,now_y});
                    }
                }
            }
        }
    }
    cout << distance[N-1][M-1] << "\n";
}
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> M >> N;
    string str;
    for(int i=0; i<N; i++){
        cin >> str;
        for(int j=0; j<M; j++){
            map[i][j]=str[j]-'0';
        }
    }
    dijkstra();
}