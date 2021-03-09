#include<iostream>
#include<algorithm>
using namespace std;
int arr[1001][1001];
int binary(int a, int b){
    if(arr[a][b]!=0){
        return arr[a][b];
    }
    if(a==b || b==0){
        arr[a][b]=1;
        return 1;
    }
    else{
        arr[a][b]=(binary(a-1,b-1)+binary(a-1,b))%10007;
        return arr[a][b];
    }
}
int main(void){   
    int N,K;
    scanf("%d %d",&N,&K);
    printf("%d",binary(N,K));
}