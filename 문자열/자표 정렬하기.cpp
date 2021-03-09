#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
    int N;
    scanf("%d",&N);
    pair <int, int> line[N];

    for(int i=0; i<N; i++){
        scanf("%d %d",&line[i].first,&line[i].second);
    }

    sort(line,line+N);

    for(int i=0; i<N; i++){
        printf("%d %d\n",line[i].first,line[i].second);
    }

    return 0;
}