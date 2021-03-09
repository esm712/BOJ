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
    int check=0;
    int lastnum[n];
    for(int i=0; i<n; i++){
        lastnum[i]=n-i;
        if(lastnum[i]==num[i]){
            check++;
        }
    }
    if(check==n){
        printf("-1");
        return 0;
    }

    next_permutation(num,num+n);
    for(int i=0; i<n; i++){
        printf("%d ",num[i]);
    }

    return 0;
}