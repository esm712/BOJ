#include<iostream>
#include<algorithm>
using namespace std;
int arr[101][101][2];
int T;
int main(void){
    arr[1][0][0]=1;
    arr[1][0][1]=1;
    for(int i=2; i<=100; i++){
        for(int j=0; j<=i; j++){
            arr[i][j][0]=arr[i-1][j][0]+arr[i-1][j][1];
            arr[i][j][1]=arr[i-1][j][0]+arr[i-1][j-1][1];
        }
    }
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",arr[a][b][0]+arr[a][b][1]);
    }
}