#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

long long int num[1000001];

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        long long int a;
        scanf("%lld",&a);
        while(1){
            if(a%10!=0){
                break;
            }
            a/=10;
        }//뒤의 0을 지워주는 while문

        int check=1;//숫자의 길이
        int reversenum[13];
        while(1){
            reversenum[check]=a%10;
            if(a/10==0){
                break;
            }
            a/=10;
            check++;
        }//뒤집었을때 배열에 저장
        long long int sum=reversenum[check];
        for(int i=check-1; i>0;i--){
            if(reversenum[i]!=0){
                long long int one=1;
                for(int j=0; j<check-i; j++){
                    one*=10;
                }
                sum+=one*reversenum[i];
            }
        }//역순으로 한 값을 sum에 넣음
        num[i]=sum;//배열에 저장
    }
    sort(num,num+n);//배열 정렬
    for(int i=0; i<n; i++){
        printf("%lld\n",num[i]);//출력
    }
    return 0;
}