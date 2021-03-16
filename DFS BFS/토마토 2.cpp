#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
struct location{
    int first,second,third;
};

int N,M,H,maximum;
int dx[6]={1,-1,0,0,0,0};
int dy[6]={0,0,1,-1,0,0};
int dz[6]={0,0,0,0,1,-1};
int map[101][101][101];
queue<location> q;


int main(void){
    cin >> M >> N >> H;
    for(int i=0; i<H; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                cin >> map[i][j][k];
                if(map[i][j][k]==1){
                    q.push({i,j,k});
                }
            }
        }
    }
    while(q.empty()==0){
        int x=q.front().first;
        int y=q.front().second;
        int z=q.front().third;
        q.pop();
        for(int i=0; i<6; i++){
            int a=x+dx[i];
            int b=y+dy[i];
            int c=z+dz[i];
            if(a>=0 && b>=0 && c>=0 && a<H && b<N && c<M && map[a][b][c]==0){
                map[a][b][c]=map[x][y][z]+1;
                q.push({a,b,c});
            }
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                if(map[i][j][k]==0){
                    cout << -1 << endl;
                    return 0;
                }
                else{
                    maximum=max(maximum,map[i][j][k]);
                }
            }
        }
    }
    cout << maximum-1 << endl;
}