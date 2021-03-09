#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
char change(char a){
    if(a=='.'){
        return '.';
    }
    if(a=='O'){
        return 'O';
    }
    if(a=='-'){
        return '|';
    }
    if(a=='|'){
        return '-';
    }
    if(a=='/'){
        return '\\';
    }
    if(a=='\\'){
        return '/';
    }
    if(a=='^'){
        return '<';
    }
    if(a=='<'){
        return 'v';
    }
    if(a=='v'){
        return '>';
    }
    if(a=='>'){
        return '^';
    }
}

int main(void){
    int n, m;
    scanf("%d %d",&n,&m);
    char picture[n][m];
    for(int i=0; i<n; i++){
        scanf("%s",picture[i]);
    }
    for(int i=m-1; i>=0; i--){
        for(int j=0; j<n; j++){
            printf("%c",change(picture[j][i]));
        }
        printf("\n");
    }
}