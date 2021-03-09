#include<iostream>
#include<algorithm>
using namespace std;
int N;
pair<int, int> arr[21]; 
int main(void){
    scanf("%d",&N);
    arr[1]={1,0};
    arr[2]={1,0};
    arr[3]={2,0};
    arr[4]={4,1};
    for(int i=5; i<=N+1; i++){
        arr[i].first=2*arr[i-1].first-arr[i-1].second;
        if(i%2==0){
            arr[i].second=arr[i-3].first+arr[i-4].first;
        }
        else{
            arr[i].second=0;
        }
    }
    printf("%d\n",arr[N+1].first);
}