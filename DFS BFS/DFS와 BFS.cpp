#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[1001];
int visited_dfs[1001];
int visited_bfs[1001];
queue<int> out;
void dfs(int num){
    visited_dfs[num]=1;
    cout << num << " ";
    for(int i=0; i<graph[num].size(); i++){
        int a=graph[num][i];
        if(visited_dfs[a]==0){
            dfs(a);
        }
    }
}
void bfs(int num){
    visited_bfs[num]=1;
    out.push(num);
    while(out.empty()==0){
        int check_1=out.front();
        out.pop();
        cout << check_1 << " ";
        for(int i=0; i<graph[check_1].size(); i++){
            int check_2=graph[check_1][i];
            if(visited_bfs[check_2]==0){
                visited_bfs[check_2]=1;
                out.push(check_2);
            }
        } 
    }
}
int main(void){
    int N, M, V;
    cin >> N >> M >> V;
    for(int i=0; i<M; i++){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i=1; i<=N; i++){
        sort(graph[i].begin(),graph[i].end());
    }
    dfs(V);
    cout << "\n";
    bfs(V);
    return 0;
}