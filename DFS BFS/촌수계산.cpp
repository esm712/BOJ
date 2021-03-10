#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a, b;
vector<int> graph[1001];
int visited[1001];
int depth;
int answer;
void dfs(int num){
    if(num==b){
        answer=depth;
    }
    visited[num]=1;
    for(int i=0; i<graph[num].size();i++){
        int next=graph[num][i];
        if(visited[next]==0){
            depth++;
            dfs(next);
            depth--;
        }
    }
}
int main(void){
    int n, m;
    cin >> n >> a >> b >> m;
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(a);
    if(answer==0){
        cout << "-1";
    }
    else{
        cout << answer;
    }
    return 0;
}