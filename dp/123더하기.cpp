#include<iostream>
#include<algorithm>
using namespace std;
int T,n;
int arr[12];
int main(void){
    scanf("%d",&T);
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    arr[4]=7;
    for(int i=0; i<T; i++){
        scanf("%d",&n);
        for(int i=5; i<=n; i++){
            arr[i]=2*arr[i-1]-arr[i-4];
        }
        printf("%d\n",arr[n]);
    }
}