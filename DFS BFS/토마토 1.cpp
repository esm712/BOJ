#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
struct location{
    int first,second;
};
int N,M,maximum;
int map[1001][1001];
queue<location> q;

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

int main(void){
    cin >> M >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> map[i][j];
            if(map[i][j]==1){
                q.push({i,j});
            }
        }
    }
    while(q.empty()==0){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int a=x+dx[i];
            int b=y+dy[i];
            if(a>=0 && b>=0 && a<N && b<M && map[a][b]==0){
                map[a][b]=map[x][y]+1;
                q.push({a,b});
            }
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(map[i][j]==0){
                cout << -1;
                return 0;
            }
            else{
                maximum=max(maximum,map[i][j]);
            }
        }
    }
    cout << maximum-1;
    return 0;
}