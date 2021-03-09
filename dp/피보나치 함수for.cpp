#include<iostream>
#include<algorithm>
using namespace std;
int T;
int arr1[41];
int arr2[41];
int main(void){
    scanf("%d",&T);
    arr1[0]=1;
    arr1[1]=0;
    arr2[0]=0;
    arr2[1]=1;
    for(int i=0; i<T; i++){
        int a;
        scanf("%d",&a);
        for(int i=2; i<=a; i++){
            arr1[i]=arr1[i-1]+arr1[i-2];
            arr2[i]=arr2[i-1]+arr2[i-2];
        }
        printf("%d %d\n",arr1[a],arr2[a]);
    }
}