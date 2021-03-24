#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int T;
int n,d,c;
int a,b,s;
vector<pair<int,int>> edge[10001];
void dijkstra(int num){
    vector<int> distance(n+1,1e9);
    distance[num]=0;
    priority_queue<pair<int,int>> q;
    q.push({0,num});
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
                distance[now_e]=distance[past_e]+now_d;
                q.push({-distance[now_e],now_e});
            }
        }
    }
    int count=0;
    int maximum=0;
    for(int i=1; i<=n; i++){
        if(distance[i]!=1e9){
            count++;
            maximum=max(maximum,distance[i]);
        }
    }
    cout << count << " " << maximum << "\n";
}
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> n >> d >> c;
        for(int j=0; j<d; j++){
            cin >> a >> b >> s;
            edge[b].push_back({a,s});
        }
        dijkstra(c);
        for(int j=0; j<10000; j++){
            edge[j].clear();
        }
    }
}