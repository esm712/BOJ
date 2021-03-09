#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main(void){
    char sentence[300];
    string word;
    while(1){
        int check[26]={0,};
        scanf("%[^\n]s",sentence);
        getchar();
        word=sentence;
        if(word == "#"){
            break;
        }
        for(int i=0; i<strlen(sentence); i++){
            if(sentence[i]-'a'>=0 && 'z'-sentence[i]>=0){
                int num=0;
                num=sentence[i]-'a';
                check[num]=1;
            }
            if(sentence[i]-'A'>=0 && 'Z'-sentence[i]>=0){
                int num=0;
                num=sentence[i]-'A';
                check[num]=1;
            }
        }
        int sum=0;
        for(int i=0; i<26; i++){
            if(check[i]==1){
                sum++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}