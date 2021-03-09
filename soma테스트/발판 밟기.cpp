#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int arr[N];
    int max=0;
    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        arr[i]=x;
    }
    for(int i=0; i<3; i++){
        int check[N]={0,};
        int cnt=0;
        int start=i;
        while(1){
            check[start]++;
            cnt++;
            if(check[start]==2){
                break;
            }
            start+=arr[start];
        }
        if(max<cnt){
            max=cnt;
        }
    }
    cout << max;
    return 0;
}