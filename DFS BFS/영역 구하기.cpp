#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
struct location{
    int first,second;
};
int M, N, K;
int arr[101][101];
vector<int> answer;
queue<location> q;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int cnt;
void bfs(int now_x, int now_y){
    arr[now_x][now_y]=1;
    cnt++;
    q.push({now_x,now_y});
    while(q.empty()==0){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int a=x+dx[i];
            int b=y+dy[i];
            if(a>=0 && b>=0 && a<N && b<M && arr[a][b]==0){
                arr[a][b]=1;
                cnt++;
                q.push({a,b});
            }
        }
    }
}
int main(void){
    cin >> M >> N >> K;
    for(int i=0; i<K; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for(int j=a; j<c; j++){
            for(int k=b; k<d; k++){
                arr[j][k]=1;
            }
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(arr[i][j]==0){
                bfs(i,j);
                answer.push_back(cnt);
                cnt=0;
            }
        }
    }
    sort(answer.begin(),answer.end());
    cout << answer.size() << endl;
    for(int i=0; i<answer.size(); i++){
        cout << answer[i] << " ";
    }
}