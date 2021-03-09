#include<iostream>
#include<algorithm>
using namespace std;
int n[11]={2,3,5,7,11,13,17,19,23,31,37};
int main(void){
    int num;
    while(1){
        int b[12]={0,};
        scanf("%d",&num);
        if(num==0){
            return 0;
        }
        int a;
        for(int i=10; i>=0; i--){
            int sum=0;
            for(int i=0; i<size; i++){
                sum+=n[i];
            }
            b[i]=num/sum;
            num=num%sum;
            size--;
        }
        printf("%d = ",num);
        for(int i=0; i<11; i++){
            if(b[i]==0){
                continue;
            }
            else{
                printf("%d",b[i]);
                for(int i=0; i<i+1)
            }
        }
    }
}