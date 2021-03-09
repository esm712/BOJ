#include<iostream>
#include<algorithm>
using namespace std;
int D,K;
int Anum[31];
int Bnum[31];
int main(void){
    scanf("%d %d",&D,&K);
    Anum[0]=1,Anum[1]=0;
    Bnum[0]=0,Bnum[1]=1;
    for(int i=2; i<=D; i++){
        Anum[i]=Anum[i-1]+Anum[i-2];
        Bnum[i]=Bnum[i-1]+Bnum[i-2];
    }
    int Amax=1;
    int Bmax;
    while(1){
        int sum=0;
        sum+=Amax*Anum[D-1];
        Bmax=1;
        while(1){
            sum+=Bmax*Bnum[D-1];
            if(sum>K){
                break;
            }
            if(sum==K){
                printf("%d\n%d",Amax,Bmax);
                return 0;
            }
            sum-=Bmax*Bnum[D-1];
            Bmax++;
        }
        Amax++;
    }
}