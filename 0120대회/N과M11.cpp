#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int arr[10];
int answer[10];

void permutation(int index, int location){
    if(location==M){
        for(int i=0; i<M; i++){
            printf("%d ",answer[i]);
        }
        printf("\n");
        return;
    }
    int prev=-1;
    for(int i=index; i<N; i++){
        if(prev==arr[i]){
            continue;
        }
        answer[location]=arr[i];
        prev=arr[i];
        permutation(i,location+1);
        answer[location]=0;
    }
}

int main(void){
    scanf("%d %d",&N, &M);
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+N);
    permutation(0,0);
}