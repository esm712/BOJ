#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
    int n;
    scanf("%d",&n);
    int map[101][101]={0,};
    for(int i=1; i<n+1; i++){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        for(int j=a; j<a+c; j++){
            for(int k=b; k<b+d; k++){
                map[j][k]=i;
            }
        }
    }
    for(int i=1; i<n+1; i++){
        int sum=0;
        for(int j=0; j<101; j++){
            for(int k=0; k<101; k++){
                if(map[j][k]==i){
                    sum++;
                }
            }
        }
        printf("%d\n",sum);
    }
}