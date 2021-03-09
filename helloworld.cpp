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

        printf("%d",strlen(word));
    }
}
