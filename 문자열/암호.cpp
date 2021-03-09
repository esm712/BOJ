#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main(void){
    char cipher[30001];
    char key[30001];
    scanf("%[^\n]s",cipher);
    getchar();
    scanf("%s",key);

    for(int i=0; i<strlen(cipher); i+=strlen(key)){
        for(int j=0; j<strlen(key); j++){
            if(cipher[i+j]==' '){
                printf(" ");
                continue;
            }
            if(cipher[i+j]-key[j]+'a'=='a'){
                printf("z");
                continue;
            }
            if(cipher[i+j]-key[j]+'a'>='a' && cipher[i+j]-key[j]+'a'<='z'){
                printf("%c",cipher[i+j]-key[j]-1+'a');
            }
            if(cipher[i+j]-key[j]+'z'>='a' && cipher[i+j]-key[j]+'z'<='z'){
                printf("%c",cipher[i+j]-key[j]+'z');
            }
        }
    }
}