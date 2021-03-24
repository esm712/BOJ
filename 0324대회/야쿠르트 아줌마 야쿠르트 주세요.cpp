#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int V, E;
vector<pair<int,int>> edge[10001];
int start_point;
vector<int> azumma[10001];
int sum;
int arr[11];

void dijkstra(int start_num, int next_num){
    vector<int> distance(V+1,1e9);
    distance[start_num]=0;
    priority_queue<pair<int,int>> pq;
    pq.push({0,start_num});
    while(!pq.empty()){
        int past_d = -pq.top().first;
        int past_e = pq.top().second;
        pq.pop();
        if(distance[past_e] < past_d){
            continue;
        }
        for(int i=0; i<edge[past_e].size(); i++){
            int now_e = edge[past_e][i].first;
            int now_d = edge[past_e][i].second;
            if(distance[now_e] > distance[past_e] + now_d){
                distance[now_e]=distance[past_e] + now_d;
                pq.push({-distance[now_e],now_e});
            }
        }
    }
    if(distance[next_num]!=1e9){
        sum+=distance[next_num];
        azumma[next_num].push_back(sum);
    }
}
void dijkstra_2(int num){
    vector<int> distance(V+1,1e9);
    distance[num]=0;
    priority_queue<pair<int,int>> pq;
    pq.push({0,num});
    while(!pq.empty()){
        int past_d = -pq.top().first;
        int past_e = pq.top().second;
        pq.pop();
        if(distance[past_e] < past_d){
            continue;
        }
        for(int i=0; i<edge[past_e].size(); i++){
            int now_e = edge[past_e][i].first;
            int now_d = edge[past_e][i].second;
            if(distance[now_e] > distance[past_e] + now_d){
                distance[now_e]=distance[past_e] + now_d;
                pq.push({-distance[now_e],now_e});
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> V >> E;
    for(int i=0; i<E; i++){
        int u,v,w;
        cin >> u >> v >> w;
        edge[u].push_back({v,w});
        edge[v].push_back({u,w});
    }
    int start, next;
    cin >> start;
    arr[1]=start;
    azumma[start].push_back(sum);
    for(int i=0; i<9; i++){
        cin >> next;
        arr[i+2]=next;
        dijkstra(start,next);
        start=next;
    }
    cin >> start_point;
    dijkstra_2(start_point);
}