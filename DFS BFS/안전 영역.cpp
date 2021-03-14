#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
struct safezone{
    int first, second;
};
int N;
int arr[101][101];
int maximum;
int visited[101][101];
int cnt;
vector<int> answer;
queue<safezone> q;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void bfs(int now_x, int now_y, int num){
    visited[now_x][now_y]=1;
    q.push({now_x,now_y});
    while(q.empty()==0){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int a=x+dx[i];
            int b=y+dy[i];
            if(a>=0 && b>=0 && a<N && b<N && visited[a][b]==0 && arr[a][b]>num){
                visited[a][b]=1;
                q.push({a,b});
            }
        }
    }
}

int main(void){
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
            maximum=max(maximum,arr[i][j]);
        }
    }

    for(int i=0; i<=maximum; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                if(arr[j][k]>i && visited[j][k]==0){
                    bfs(j,k,i);
                    cnt++;
                }
            }
        }
        answer.push_back(cnt);
        cnt=0;
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                visited[j][k]=0;
            }
        }
    }
    sort(answer.begin(),answer.end());
    cout << answer[answer.size()-1];
}