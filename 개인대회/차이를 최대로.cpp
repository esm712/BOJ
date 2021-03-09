#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int check[8];
int arr[8];//입력받은 배열
int ans[8];//재정렬하는 배열
int sum[100001];//정답 저장하는 배열
int point;//sum배열에 저장할 위치를 표시하는 point
void go(int location, int n){
    if(location==n){
        int a=0;
        for(int i=0; i<n-1; i++){
            a+=abs(ans[i]-ans[i+1]);
        }
        sum[point]=a;
        point++;
        return;
    }
    for(int i=0; i<=n; i++){
        if(check[i]==0){
            check[i]=1;
            ans[location]=arr[i];
            go(location+1, n);
            check[i]=0;
            ans[location]=0;
        }
    }
}
int main(void){
    int N;
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    go(0,N);
    printf("%d\n",sum[0]);
    int large=0;
    for(int i=0; i<100001; i++){
        large=max(large,sum[i]);
    }
    printf("%d",large);
}