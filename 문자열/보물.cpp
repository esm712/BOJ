#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int c[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d",&b[i]);
        c[i]=b[i];
    }

    sort(a,a+n);
    sort(c,c+n);
    reverse(c,c+n);
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=c[i]*a[i];
    }

    printf("%d",sum);
}