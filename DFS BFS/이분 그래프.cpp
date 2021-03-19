#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

int K, V, E;
int color[20001];
vector<int> v[20001];
queue<int> q;
int answer=0;

void bfs(int num){
    q.push(num);
    while(q.empty()==0){
        int x=q.front();
        q.pop();
        for(int j=0; j<v[x].size(); j++){
            int y=v[x][j];
            if(color[y]==0){
                color[y]=color[x]%2+1;
                q.push(y);
            }
            else{
                if(color[y]!=color[x]%2+1){
                    answer=1;
                }
            }
        }
    }
}
int main(void){
    cin >> K;
    for(int i=0; i<K; i++){
        cin >> V >> E;
        for(int j=0; j<E; j++){
            int x, y;
            cin >> x >> y;
            v[x-1].push_back(y-1);
            v[y-1].push_back(x-1);
        }
        for(int i=0; i<V; i++){
            if(color[i]==0){
                bfs(i);
            }
            if(answer==1){
                cout << "NO" <<endl;
                break;
            }
        }
        if(answer==0){
            cout << "YES" << endl;
        }
        answer=0;
        for(int j=0; j<20001; j++){
            color[j]=0;
            v[j].clear();
        }//초기화
    }
}