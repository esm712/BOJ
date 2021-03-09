#include<iostream>
#include<algorithm>
#include<string.h>
#include<deque>
using namespace std;
deque <int> dq;

int main(void){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        if(s=="push_front"){
            int n;
            cin >> n;
            dq.push_front(n);
        }
        else if(s=="push_back"){
            int n;
            cin >> n;
            dq.push_back(n);
        }
        else if(s=="push_front"){
            int n;
            cin >> n;
            dq.push_front(n);
        }
        else if(s=="pop_front"){
            if(dq.empty()==1){
                cout << "-1" << '\n';
            }
            else{
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(s=="pop_back"){
            if(dq.empty()==1){
                cout << "-1" << '\n';
            }
            else{
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if(s=="size"){
            cout << dq.size() << '\n';
        }
        else if(s=="front"){
            if(dq.empty()==1){
                cout << "-1" << '\n';
            }
            else{
                cout << dq.front() << '\n';
            }
        }
        else if(s=="back"){
            if(dq.empty()==1){
                cout << "-1" << '\n';
            }
            else{
                cout << dq.back() << '\n';
            }
        }
        else{
            cout << dq.empty() << '\n';
        }
    }
}