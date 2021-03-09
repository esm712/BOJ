#include<iostream>
#include<algorithm>
#include<deque>
#include<queue>
using namespace std;
deque <int> dq;
queue <int> answer;
int main(void){
    int N, K, M;
    cin >> N >> K >> M;
    for(int i=1; i<=N; i++){
        dq.push_back(i);
    }
    int cnt=0;
    int count=0;
    while(1){
        if(dq.empty()==1){
            break;
        }
        if((count/M)%2==0){
            int n=dq.front();
            dq.pop_front();
            cnt++;
            if(cnt==K){
                answer.push(n);
                cnt=0;
                count++;
            }
            else{
                dq.push_back(n);
            }
        }
        else{
            int n=dq.back();
            dq.pop_back();
            cnt++;
            if(cnt==K){
                answer.push(n);
                cnt=0;
                count++;
            }
            else{
                dq.push_front(n);
            }
        }
    }
    int size=answer.size();
    for(int i=0; i<size; i++){
        cout << answer.front() << '\n';
        answer.pop();
    }
}