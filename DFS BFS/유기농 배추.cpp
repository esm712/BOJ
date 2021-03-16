#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
struct location{
    int first,second;
};
int T,N,M,K;
int answer=0;
int map[51][51];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
queue<location> q;

void bfs(int past_x,int past_y){
    map[past_x][past_y]=2;
    q.push({past_x,past_y});
    while(q.empty()==0){
        int a=q.front().first;
        int b=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int now_x=a+dx[i];
            int now_y=b+dy[i];
            if(now_x>=0 && now_y>=0 && now_x<N && now_y<M && map[now_x][now_y]==1){
                map[now_x][now_y]=2;
                q.push({now_x,now_y});
            }
        }
    }
    return;
}
int main(void){
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> M >> N >> K;
        for(int j=0; j<K; j++){
            int x,y;
            cin >> x >> y;
            map[y][x]=1;
        }
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                if(map[j][k]==1){
                    bfs(j,k);
                    answer++;
                }
            }
        }
        cout << answer << endl;
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                map[j][k]=0;
            }
        }
        answer=0;
    }
}