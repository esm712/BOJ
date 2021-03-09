#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(void){
    char word[5][15]={0,};
    for(int i=0; i<5; i++){
        scanf("%s",word[i]);
    }
    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(word[j][i]==0){
                continue;
            }
            printf("%c",word[j][i]);
        }
    }
}