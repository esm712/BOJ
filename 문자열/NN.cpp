#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(void){
    char a[10];
    int b;
    scanf("%s %d",a,&b);
    int size=strlen(a); //2
    int multi=atoi(a);  //20
    
    if(multi*size>b){
        int sum=0;
        while(1){
            for(int i=0; i<strlen(a); i++){
                printf("%c",a[i]);
                sum++;
                if(sum>=b){
                    return 0;
                }
            }
        }
    }
    else{
        for(int i=0; i<multi; i++){
            printf("%d",multi);
        }
    }
}