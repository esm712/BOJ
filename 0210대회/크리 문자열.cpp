#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

char S[1000];
int main(void){
    cin >> S;
    for(int i=0; i<strlen(S)/2; i++){
        left+=S[i];
    }
    for(int i=strlen(S)/2; i<strlen(S); i++){
        right+=S[i];
    }
}