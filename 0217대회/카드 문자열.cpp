#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
int main(void){
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        deque <char> dq;
        int num;
        cin >> num;
        for(int i=0; i<num; i++){
            char card;
            cin >> card;
            if(dq.empty()==1){
                dq.push_back(card);
            }
            else if(dq.front()>=card){
                dq.push_front(card);
            }
            else if(dq.back()<=card){
                dq.push_back(card);
            }
            else if(dq.front()<card && dq.back()>card){
                dq.push_back(card);
            }
            else{
            }
        }
        for(int i=0; i<num; i++){
            char ans;
            ans=dq.front();
            dq.pop_front();
            printf("%c",ans);
        }
        printf("\n");
    }
}