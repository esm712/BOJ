#include<iostream>
#include<algorithm>
using namespace std;
int X;
int arr[1000001];
int main(void){
    scanf("%d",&X);
    arr[1]=0;
    arr[2]=1;
    arr[3]=1;
    for(int i=4; i<=X; i++){
        arr[i]=arr[i-1]+1;
        if(i%3==0){
            arr[i]=min(arr[i/3]+1,arr[i]);
        }
        if(i%2==0){
            arr[i]=min(arr[i/2]+1,arr[i]);
        }
    }
    printf("%d",arr[X]);
}