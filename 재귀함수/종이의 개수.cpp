#include<iostream>
#include<algorithm>
using namespace std;
int a;//-1
int b;//0
int c;//1
bool map[3000][3000];
void papercut(int x, int y, int size){
    int check=0;
    for(int i=x; i<x+size; i++){
        for(int j=y; j<y+size; j++){
            if(map[x][y]!=map[i][j]){
                check=1;
            }
        }
    }
    if(check==1){
        papercut(x,y,size/3);
        papercut(x+size/3,y,size/3);
        papercut(x+2*size/3,y,size/3);
        papercut(x,y+size/3,size/3);
        papercut(x+size/3,y+size/3,size/3);
        papercut(x+2*size/3,y+size/3,size/3);
        papercut(x,y+2*size/3,size/3);
        papercut(x+size/3,y+2*size/3,size/3);
        papercut(x+2*size/3,y+2*size/3,size/3);                        
    }
    else{
        if(map[x][y]==-1){
            a++;
        }
        if(map[x][y]==0){
            b++;
        }
        if(map[x][y]==1){
            c++;
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
    printf("%d\n%d\n%d",a,b,c);
}