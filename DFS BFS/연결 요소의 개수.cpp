#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> graph[1001];
int visited[1001];
int cnt;
void dfs(int num){
    visited[num]=1;
    for(int i=0; i<graph[num].size(); i++){
        int now=graph[num][i];
        if(visited[now]==0){
            dfs(now);
        }
    }
}
int main(void){
    int N,M;
    cin >> N >> M;
    for(int i=0; i<M; i++){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i=1; i<=N; i++){
        sort(graph[i].begin(),graph[i].end());
    }
    for(int i=1; i<=N; i++){
        if(visited[i]==0){
            cnt++;
            dfs(i);
        }
    }
    cout << cnt;
}