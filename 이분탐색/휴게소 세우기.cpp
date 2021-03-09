#include<iostream>
#include<algorithm>
using namespace std;
int N,M;
int arr[101];
int cm[101];
int check(int left, int right, int num){
    int mid=(left+right)/2;
    int sum=0;
    if(left>right){
        return mid+1;
    }
    for(int i=0; i<N+1; i++){
        sum+=cm[i]/mid;
    }
    if(sum<=num){
        return check(left,mid-1,num);
    }
    else{
        return check(mid+1,right,num);
    }
}
int main(void){
    scanf("%d %d",&N,&M);
    scanf("%d",&arr[N+1]);
    for(int i=1; i<N+1; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+N+2);
    for(int i=0; i<N+1; i++){
        cm[i]=arr[i+1]-arr[i]-1;//휴게소가 이미 있는 부분을 측정에서 제외하기 위해서 -1
    }
    sort(cm,cm+N+1);
    printf("%d",check(1,cm[N],M));
}