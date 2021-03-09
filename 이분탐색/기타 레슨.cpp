#include<iostream>
#include<algorithm>
using namespace std;
int N,M;
int arr[100001];
int check(int left,int right, int num){
    int mid=(left+right)/2;
    if(left>right){
        return mid+1;
    }
    int sum=0;
    int count=1;
    for(int i=0; i<N; i++){
        sum+=arr[i];
        if(sum>mid){
            sum=arr[i];
            count++;
        }
    }
    if(count<=num){
        return check(left,mid-1,num);
    }
    else{
        return check(mid+1,right,num);
    }
}
int main(void){
    scanf("%d %d",&N,&M);
    int small=0;
    int big=0;//10000분을 100000레슨이라해도 int형의 범위에서 만족함
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
        big+=arr[i];
        small=max(small,arr[i]);
    }
    printf("%d",check(small,big,M));
}