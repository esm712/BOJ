#include<iostream>
#include<algorithm>
using namespace std;
int N,C;
long long int arr[200001];
long long int check(long long int left,long long int right,int num){
    long long int mid=(left+right)/2;
    if(left>right){
        return mid;
    }
    int count=1;//처음 시작할때 공유기를 설치하므로 1로 시작
    long long int checkpoint=arr[0];
    for(int i=1; i<N;i++){
        if(arr[i]-checkpoint>=mid){
            count++;
            checkpoint=arr[i];//공유기를 설치할때마다 갱신
        }
    }
    if(num<=count){
        return check(mid+1,right,num);
    }
    else{
        return check(left,mid-1,num);
    }
}
int main(void){
    scanf("%d %d",&N,&C);
    for(int i=0; i<N; i++){
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+N);
    long long int small=1;
    long long int big=arr[N-1]-arr[0];
    printf("%lld",check(small,big,C));
}