 #include<iostream>
 #include<algorithm>
 using namespace std;
 void pattern(int x, int y, int size){
     if((x/size)%3==1 && (y/size)%3==1){
         printf(" ");
     }//중간 " "삽입
     else{
         if(size/3==0){
             printf("*");
         }//최소단위에서 *출력
         else{
             pattern(x,y,size/3);
         }
     }
}
 
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            pattern(i,j,n);
        }
        printf("\n");
    }
}