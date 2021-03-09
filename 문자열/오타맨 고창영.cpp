#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int a;
        char word[81];
        scanf("%d %s",&a,&word);
        getchar();

        for(int j=0; j<a-1; j++){
            printf("%c",word[j]);
        }
        for(int k=a; k<strlen(word); k++){
            printf("%c",word[k]);
        }
        printf("\n");
    }
    return 0;
}