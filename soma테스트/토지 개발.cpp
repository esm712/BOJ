#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N:
    int arr[N];
    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        arr[i]=x;
    }
    int answer[1024];
    int a=0;
    int b=N;
    int check=0;
    while(1){
        int leftmax=0;
        int rightmax=0;
        int cnt=0;
        for(int i=a; i<b/2; i++){
            if(leftmax<arr[i]){
                leftmax=arr[i];
            }
            if(leftmax==arr[i]){
                cnt++;
            }
        }
        for(int i=b/2+1; i<b; i++){
            if(rightmax<arr[i]){
                rightmax=arr[i];
            }
        }
        if(leftmax>rightmax){
            check+=leftmax;
            a=b/2+1;
        }
        else if(rightmax>leftmax){
            check+=rightmax;
            b/=2;
        }
        else{

        }

    }

}