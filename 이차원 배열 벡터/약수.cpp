#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    sort(num,num+n);
    printf("%d",num[0]*num[n-1]);
}