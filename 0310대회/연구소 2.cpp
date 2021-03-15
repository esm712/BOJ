#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
struct location{
    int first,second;
};
int N, M;
int map[51][51];
int visited[51][51];
int visited_2[51][51];
vector<location> viruscan;
int A[260][10];
int answer[10];
int check[10];
int cnt;
vector<int> final_answer;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
queue<location> q;

void combination(int index, int lo){
    if(lo==M){
        for(int i=0; i<M; i++){
            A[cnt][i]=answer[i];
        }
        cnt++;
        return;
    }
    for(int i=index; i<viruscan.size(); i++){
        if(check[i]==0){
            check[i]=1;
            answer[lo]=i;
            combination(i,lo+1);
            check[i]=0;
            answer[lo]=0;
        }
    }
    return;
}
void bfs(int past_x, int past_y){
    visited[past_x][past_y]=0;
    q.push({past_x,past_y});
    while(q.empty()==0){
        int now_x=q.front().first;
        int now_y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int a=now_x+dx[i];
            int b=now_y+dy[i];
            if(a>=0 && b>=0 && a<N && b<N && visited_2[a][b]==0){
                visited_2[a][b]=1;
                visited[a][b]=min(visited[a][b],visited[now_x][now_y]+1);
                q.push({a,b});
            }
        }
    }
}

int main(void){
    cin >> N >> M;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> map[i][j];
            visited[i][j]=1000;
            if(map[i][j]==2){
                viruscan.push_back({i,j});
            }
            if(map[i][j]==1){
                visited[i][j]=-1;
                visited_2[i][j]=-1;
            }
        }
    }
    combination(0,0);
    for(int i=0; i<cnt; i++){
        for(int j=0; j<M; j++){
            int num=A[i][j];
            int x=viruscan[num].first;
            int y=viruscan[num].second;
            bfs(x,y);
            for(int k=0; k<N; k++){
                for(int l=0; l<N; l++){
                    if(visited_2[k][l]!=-1){
                        visited_2[k][l]=0;
                    }
                }
            }
        }
        int maximum=0;
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                maximum=max(maximum,visited[j][k]);
            }
        }
        if(maximum!=1000){
            final_answer.push_back(maximum);
        }
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                visited[j][k]=1000;
                if(map[j][k]==1){
                    visited[j][k]=-1;
                }
            }
        }
    }
    sort(final_answer.begin(),final_answer.end());
    if(final_answer.size()==0){
        cout << -1 << endl;
    }
    else{
        cout << final_answer[0] << endl;
    }
}