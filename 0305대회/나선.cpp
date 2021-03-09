#include<iostream>
#include<algorithm>
using namespace std;
int arr[5000][5000];

int main(void){
    int N,M;
    cin >> N >> M;
    int x=0,y=0;
    int direction=1;
    for(int i=0; i<N*M-1; i++){
        arr[x][y]=1;
        if(direction==1){
            x+=1;
        }
        else if(direction==2){
            y+=1;
        }
        else if(direction==3){
            x-=1;
        }
        else{
            y-=1;
        }

        if(x==N){
            x-=1;
            y+=1;
            direction=2;
        }
        else if(y==M){
            x-=1;
            y-=1;
            direction=3;
        }
        else if(x<0){
            x+=1;
            y-=1;
            direction=4;
        }
        else if(arr[x][y]==1){
            if(direction==1){
                direction=2;
                x-=1;
                y+=1;
            }
            else if(direction==2){
                direction=3;
                x-=1;
                y-=1;
            }
            else if(direction==3){
                direction=4;
                x+=1;
                y-=1;
            }
            else{
                direction=1;
                x+=1;
                y+=1;
            }
        }
        else{
        }
    }

    cout << x << " " << y;
}