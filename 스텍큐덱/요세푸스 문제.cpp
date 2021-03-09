#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
queue <int> q;
queue <int> answer;
int main(void){
    int a, b;
    cin >> a >> b;
    for(int i=1; i<=a; i++){
        q.push(i);
    }
    int cnt=0;
    while(1){
        if(q.empty()==1){
            break;
        }
        int n=q.front();
        q.pop();
        cnt++;
        if(cnt==b){
            answer.push(n);
            cnt=0;
        }
        else{
            q.push(n);
        }
    }
    int size=answer.size();
    cout << "<";
    for(int i=0; i<size-1; i++){
        cout << answer.front() << ", ";
        answer.pop();
    }
    cout << answer.front() << ">";
}