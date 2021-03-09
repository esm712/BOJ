#include<iostream>
#include<algorithm>
using namespace std;
int N,M;//N은 아이들 수, M은 생상의 수
int color[300001];
int check(int left, int right, int num){
    int mid=(left+right)/2;
    if(left>right){
        return mid+1;
    }
    int count=0;
    for(int i=0; i<M; i++){
        if(color[i]%mid==0){
            count+=color[i]/mid;
        }
        else{
            count+=color[i]/mid+1;
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
    for(int i=0; i<M; i++){
        scanf("%d",&color[i]);
    }
    printf("%d",check(1,1e9,N));
}