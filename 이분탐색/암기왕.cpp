#include<iostream>
#include<algorithm>
using namespace std;
int T,N,M;
int first[1000001];
int check(int left, int right, int num){
    int mid=(left+right)/2;
    if(left>right){
        return 0;
    }
    if(first[mid]>num){
        return check(left,mid-1,num);
    }
    else if(first[mid]<num){
        return check(mid+1,right,num);
    }
    else{
        return 1;
    }
}
int main(void){
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d",&N);
        for(int j=0; j<N; j++){
            scanf("%d",&first[j]);
        }
        sort(first,first+N);
        scanf("%d",&M);
        for(int j=0; j<M; j++){
            int a;
            scanf("%d",&a);
            printf("%d\n",check(0,N-1,a));
        }
    }
    return 0;
}