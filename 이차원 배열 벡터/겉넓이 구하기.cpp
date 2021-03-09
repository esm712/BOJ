#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int n, m;
    scanf("%d %d",&n,&m);
    int box[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&box[i][j]);
        }
    }
    int sum=0;
    sum+=2*n*m;
    for(int i=0; i<n; i++){
        sum+=box[i][0];
        sum+=box[i][m-1];
    }
    for(int i=0; i<m; i++){
        sum+=box[0][i];
        sum+=box[n-1][i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m-1; j++){
            int first=box[i][j];
            int second=box[i][j+1];
            if(first>second){
                sum+=first-second;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=m-1; j>0; j--){
            int first=box[i][j];
            int second=box[i][j-1];
            if(first>second){
                sum+=first-second;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n-1; j++){
            int first=box[j][i];
            int second=box[j+1][i];
            if(first>second){
                sum+=first-second;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=n-1; j>0; j--){
            int first=box[j][i];
            int second=box[j-1][i];
            if(first>second){
                sum+=first-second;
            }
        }
    }
    printf("%d",sum);
}