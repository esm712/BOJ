#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int arr[10001];
int main(void){
    int N;
    cin >> N;
    int a=0;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        if(s=="push"){
            int n;
            scanf("%d",&n);
            arr[a]=n;
            a++;
        }
        if(s=="empty"){
            if(a==0){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        if(s=="pop"){
            if(a==0){
                printf("-1\n");
            }
            else{
                a--;
                printf("%d\n",arr[a]);
            }
        }
        if(s=="top"){
            if(a==0){
                printf("-1\n");
            }
            else{
                printf("%d\n",arr[a-1]);
            }
        }
        if(s=="size"){
            printf("%d\n",a);
        }
    }
}