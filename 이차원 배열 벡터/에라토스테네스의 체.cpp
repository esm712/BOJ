#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int n, m;
    scanf("%d %d",&n,&m);
    int check[n+1]={0,};
    int cnt=0;
    for(int i=2; i<n+1; i++){
        if(check[i]==0){
            int a=1;
            while(1){
                if(i*a>n){
                    break;
                }
                if(check[i*a]==0){
                    check[i*a]=1;
                    cnt++;
                    if(cnt==m){
                        printf("%d",i*a);
                        return 0;
                    }
                }
                a++;
            }
        }
    }
}