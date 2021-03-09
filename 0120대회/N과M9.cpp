#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int arr[10];
int answer[10];
int check[10];
void permutation(int n, int size){
    if(size==M){
        for(int i=0; i<M; i++){
            printf("%d ",answer[i]);
        }
        printf("\n");
        return;
    }
    int a=-1;
    for(int i=0; i<N; i++){
        if(a==arr[i]){
            continue;
        }
        if(check[i]==0){
            check[i]=1;
            answer[size]=arr[i];
            a=arr[i];
            permutation(i,size+1);
            check[i]=0;
            answer[size]=0;
        }
    }
}
int main(void){
    scanf("%d %d",&N,&M);
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+N);
    permutation(0,0);
}