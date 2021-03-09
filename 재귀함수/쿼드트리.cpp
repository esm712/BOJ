#include<iostream>
#include<algorithm>
using namespace std;
char map[100][100];

void compression(int x, int y, int size){
    int check=0;
    for(int i=x; i<x+size; i++){
        for(int j=y; j<y+size; j++){
            if(map[x][y]!=map[i][j]){
                check=1;
            }
        }
    }
    if(check==1){
        printf("(");
        compression(x,y,size/2);
        compression(x,y+size/2,size/2);
        compression(x+size/2,y,size/2);
        compression(x+size/2,y+size/2,size/2);
        printf(")");
    }
    else{
        printf("%c",map[x][y]); 
    }
    return;
}

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%s",map[i]);
    }
    compression(0,0,n);
}