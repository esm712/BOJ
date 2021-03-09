#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int dwarf[9];
    int ddwarf=9;

    int sum=0;
    for(int i=0; i<ddwarf; i++){
        scanf("%d",&dwarf[i]);
        sum+=dwarf[i];
    }
    sort(dwarf,dwarf+ddwarf);

    for(int i=0; i<ddwarf; i++){
        for(int j=i+1; j <ddwarf; j++){
            if(sum-dwarf[i]-dwarf[j]==100){
                for(int k=0; k<ddwarf; k++){
                    if(i==k || j==k){
                        continue;
                    }
                    printf("%d\n",dwarf[k]);
                }
                return 0;
            }
        }
    }
}