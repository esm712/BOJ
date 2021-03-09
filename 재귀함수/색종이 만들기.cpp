#include<iostream>
#include<algorithm>
using namespace std;
int blue;
int white;
int map[129][129];

void papercut(int x, int y, int size){
    int a=map[x][y];
    int check=0;
    for(int i=x; i<x+size; i++){
        for(int j=y; j<y+size; j++){
            if(map[i][j]!=a){
                check=1;
            }
        }
    }
    if(check==1){
        papercut(x,y,size/2);
        papercut(x,y+size/2,size/2);
        papercut(x+size/2,y,size/2);
        papercut(x+size/2,y+size/2,size/2);
    }
    else{
        if(a==0){
            white++;
        }
        if(a==1){
            blue++;
        }
    }
    return;
}

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&map[i][j]);
        }
    }
    papercut(0,0,n);
    printf("%d\n%d",white,blue);
}