#include<iostream>
#include<algorithm>
using namespace std;
int T;
int arr1[41];
int arr2[41];
int check1(int num){
    if(num==0 || num==1){
        return arr1[num];
    }
    if(arr1[num]>0){
        return arr1[num];
    }
    else{
        return arr1[num]=check1(num-1)+check1(num-2);
    }
}
int check2(int num){
    if(num==0 || num==1){
        return arr2[num];
    }
    if(arr1[num]>0){
        return arr2[num];
    }
    else{
        return arr2[num]=check2(num-1)+check2(num-2);
    }
}
int main(void){
    scanf("%d",&T);
    arr1[0]=1;
    arr1[1]=0;
    arr2[0]=0;
    arr2[1]=1;
    for(int i=0; i<T; i++){
        int a;
        scanf("%d",&a);
        printf("%d %d\n",check1(a),check2(a));
    }
}