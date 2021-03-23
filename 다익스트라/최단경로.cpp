#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

int V, E, K;
vector<pair<int,int>> edge[20001];

void dijkstra(){
    vector<int> distance(V+1,1e9);
    distance[K]=0;
    priority_queue<pair<int,int>> q;
    q.push({0,K});
    while(!q.empty()){
        int past_d = -q.top().first;
        int past_e = q.top().second;
        q.pop();
        if(distance[past_e] < past_d){
            continue;
        }
        for(int i=0; i<edge[past_e].size(); i++){
            int now_e = edge[past_e][i].first;
            int now_d = edge[past_e][i].second;
            if(distance[now_e] > distance[past_e]+now_d){
                distance[now_e] = distance[past_e]+now_d;
                q.push({-distance[now_e],now_e});
            }
        }
    }
    for(int i=1; i<=V; i++){
        if(distance[i]==1e9){
            cout << "INF\n";
        }
        else{
            cout << distance[i] << "\n";
        }
    }
}
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> V >> E;
    cin >> K;
    for(int i=0; i<E; i++){
        int u,v,w;
        cin >> u >> v >> w;
        edge[u].push_back({v,w});
    }
    dijkstra();
}