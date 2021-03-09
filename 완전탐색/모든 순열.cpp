#include<iostream>
#include<algorithm>
using namespace std;

int answer[100000];
int check[100000];
void permutation(int location, int n){
    if(location == ){
        for(int i=0; i<n; i++){
            printf("%d ", answer[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++){
        if(check[i]==0){
            check[i]=1;
            answer[location]=i;
            permutation(location+1,n);
            check[i]=0;
            answer[location]=0;
        }
    }
    return;
}

int main(void){
    int n;
    scanf("%d",&n);
    permutation(0,n);
}