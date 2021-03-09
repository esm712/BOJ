#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
queue <int> num;

int main(void){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        if(s=="push"){
            int n;
            cin >> n;
            num.push(n);
        }
        else if(s=="front"){
            if(num.empty()==1){
                cout << "-1" << '\n';
            }
            else{
                cout << num.front() << '\n';
            }
        }
        else if(s=="back"){
            if(num.empty()==1){
                cout << "-1" << '\n';
            }
            else{
                cout << num.back() << '\n';
            }
        }
        else if(s=="size"){
            cout << num.size() << '\n';
        }
        else if(s=="pop"){
            if(num.empty()==1){
                cout << "-1" << '\n';
            }
            else{
                cout << num.front() << '\n';
                num.pop();
            }
        }
        else{
            cout << num.empty() << '\n';
        }
    }
}