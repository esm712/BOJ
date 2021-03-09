#include<iostream>
#include<algorithm>
using namespace std;
int N,M;
int arr[100001];
int check(int left, int right, int num){
    int mid=(left+right)/2;
    if(left>right){
        return 0;
    }
    if(arr[mid]<num){
        return check(mid+1,right,num);
    }
    else if(arr[mid]>num){
        return check(left,mid-1,num);
    }
    else{
        return 1;
    }
}
int main(void){
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&M);
    sort(arr,arr+N);
    for(int i=0; i<M; i++){
        int a;
        scanf("%d",&a);
        printf("%d\n",check(0,N-1,a));
    }
}