#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
struct location{
    int first,second;
};
int N,M;
char map[51][51];
int visited[51][51];
queue<location> q;
queue<location> v;
vector<int> answer;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

void bfs(int past_x,int past_y){
    visited[past_x][past_y]=1;
    v.push({past_x,past_y});
    while(v.empty()==0){
        int now_x=v.front().first;
        int now_y=v.front().second;
        v.pop();
        for(int i=0; i<4; i++){
            int a=now_x+dx[i];
            int b=now_y+dy[i];
            if(a>=0 && b>=0 && a<N && b<M && visited[a][b]==0 && map[a][b]=='L'){
                visited[a][b]=visited[now_x][now_y]+1;
                v.push({a,b});
            }
        }
    }
}
int main(void){
    cin >> N >> M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> map[i][j];
            if(map[i][j]=='L'){
                q.push({i,j});
            }
        }
    }
    while(q.empty()==0){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        bfs(x,y);
        int maximum=0;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                maximum=max(maximum,visited[i][j]);
                visited[i][j]=0;
            }
        }
        answer.push_back(maximum);
    }
    sort(answer.begin(),answer.end());
    cout << answer[answer.size()-1]-1;
}