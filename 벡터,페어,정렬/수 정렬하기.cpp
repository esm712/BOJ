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
    for(int i=0; i<n; i++){
        printf("%d\n",num[i]);
    }
}