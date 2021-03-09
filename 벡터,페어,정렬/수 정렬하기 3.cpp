#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int n;
    scanf("%d",&n);
    int num[10001]={0,};

    for(int i=0; i<n; i++){
        int check;
        scanf("%d",&check);
        num[check]++;
    }
    for(int i=1; i<10001; i++){
        for(int j=0; j<num[i]; j++){
            printf("%d\n",i);
        }
    }
}