#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int arr[100][100];
int visited[100][100];
int main(void){
    int N, M;
    cin >> N >> M;
    int col[4]={0,0,1,-1};
    int row[4]={1,-1,0,0};
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%1d",&arr[i][j]);//1개의 정수를 따로 따로 입력받는 방법이 생각이 안난다.
        }
    }
}