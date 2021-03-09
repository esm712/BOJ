#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int N;
    scanf("%d",&N);
    int M;
    scanf("%d",&M);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    int check=0;
    for(int i=0; i<N; i++){
        int sum=0;
        for(int j=i; j<N; j++){
            sum+=arr[j];
            if(sum==M){
                check++;
                break;
            }
            if(sum>M){
                break;
            }
        }
    }
    printf("%d",check);
}