#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int V, E;
vector<pair<int,int>> edge[10001];
int start_point;
vector<long long int> azumma[10001];//각 노드별 야쿠르트 아줌마가 이동 하는 시간을 저장하는 벡터
long long int sum; //야쿠르트 아줌마가 노드에 도착하는 시간을 측정하기 위한 변수
int check;//야쿠크르 아줌마가 지점으로 이동이 불가능한지 체크
vector<int> answer; //정답을 저장하는 벡터

void dijkstra(int start_num, int next_num){
    vector<long long int> distance(V+1,1e12);
    distance[start_num]=0;
    priority_queue<pair<long long int,int>> pq;
    pq.push({0,start_num});
    while(!pq.empty()){
        long long int past_d = -pq.top().first;
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
    if(distance[next_num]!=1e12){
        sum+=distance[next_num];
        azumma[next_num].push_back(sum);
    }
    else{
        check=1;
    }
}

void dijkstra_2(int num){
    vector<long long int> distance(V+1,1e12);
    distance[num]=0;
    priority_queue<pair<long long int,int>> pq;
    pq.push({0,num});
    while(!pq.empty()){
        long long int past_d = -pq.top().first;
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
    for(int i=1; i<10001; i++){
        if(azumma[i].empty()!=0){
            continue;
        }
        else{
            for(int j=0; j<azumma[i].size(); j++){
                if(azumma[i][j] >= distance[i]){
                    answer.push_back(i);
                }
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
    azumma[start].push_back(sum);
    for(int i=0; i<9; i++){
        cin >> next;
        dijkstra(start,next);
        if(check==1){
            check=0;
        }
        else{
            start=next;
            check=0;
        }
    }
    cin >> start_point;
    dijkstra_2(start_point); //출발지점에서 다익스트라
    if(answer.empty()==0){
        sort(answer.begin(),answer.end());
        cout << answer[0];//갈 수 있는 가능한 노드들 중 가장 값이 작은 노드 출력
    }
    else{
        cout << -1;
    }
}