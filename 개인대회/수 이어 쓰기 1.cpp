#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(void){
    int N;
    scanf("%d",&N);
    int number=N;
    int size=0;
    int sum=0;
    while(1){
        if(number==0){
            break;
        }
        number/=10;
        size++;
    }
    int one=1;
    for(int i=1; i<size; i++){
        sum+=9*i*one;
        one*=10;
    }
    sum+=size*(N-one+1);
    printf("%d",sum);
}