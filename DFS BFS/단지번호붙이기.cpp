#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int N;//NXN크기의 지도 크기
int map[25][25];//원래 입력받은 지도
int visited[25][25];//방문을 확인하는 지도
vector<int> answer;//정답 넣은 벡터
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
struct house{
    int first, second;
};
queue<house> q;

void bfs(int now_x,int now_y){
    int count=0;
    visited[now_x][now_y]=1;
    q.push({now_x,now_y});
    while(q.empty()==0){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int a=x+dx[i];
            int b=y+dy[i];
            if(a>=0 && a<N && b>=0 && b<N && map[a][b]==1 && visited[a][b]==0){
                visited[a][b]=1;
                map[a][b]=-1;
                q.push({a,b});
            }
        }
        count++;
    }
    answer.push_back(count);
}
int main(void){
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%1d",&map[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(map[i][j]==1){
                bfs(i,j);
            }
        }
    }
    sort(answer.begin(),answer.end());
    cout << answer.size() << endl;
    for(int i=0; i<answer.size(); i++){
        cout << answer[i] << endl;
    }
}