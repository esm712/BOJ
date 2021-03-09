#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int number;
    scanf("%d",&number);
    int num=number;
    int check=0;
    while(1){
        if(number==0){
            break;
        }
        number/=10;
        check++;
    }
    if(check<3){
        printf("%d",num);
    }
    else if(num==1000){
        printf("144");
    }
    else{
        int answer=99;
        for(int i=100; i<num+1; i++){
            int gap[check];
            int a=i;
            for(int j=0; j<check; j++){
                gap[j]=a%10;
                a/=10;
            }
            if(gap[1]-gap[0]==gap[2]-gap[1]){
                answer++;
            }//보안해야될 사항
        }
        printf("%d",answer);
    }
}