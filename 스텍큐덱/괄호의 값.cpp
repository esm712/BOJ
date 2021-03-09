#include<iostream>
#include<algorithm>
#include<string.h>
#include<stack>
using namespace std;
stack <int> num;

int main(void){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            num.push(-2);
        }
        else if(s[i]=='['){
            num.push(-3);
        }
        else if(s[i]==')'){
            if(num.empty()==1 || num.top()==-3){
                cout << '0';
                return 0;
            }
            else if(num.top()==-2){
                num.pop();
                num.push(2);
            }
            else{
                int n=num.top();
                num.pop();
                while(1){
                    if(num.empty()==1){
                        cout <<'0';
                        return 0;
                    }
                    else if(num.top()==-2){
                        num.pop();
                        num.push(2*n);
                        break;
                    }
                    else if(num.top()==-3){
                        cout << '0';
                        return 0;
                    }
                    else{
                        n+=num.top();
                        num.pop();
                    }
                }
            }
        }
        else{
            if(num.empty()==1 || num.top()==-2){
                cout << '0';
                return 0;
            }
            else if(num.top()==-3){
                num.pop();
                num.push(3);
            }
            else{
                int n=num.top();
                num.pop();
                while(1){
                    if(num.empty()==1){
                        cout << '0';
                        return 0;
                    }
                    else if(num.top()==-3){
                        num.pop();
                        num.push(3*n);
                        break;
                    }
                    else if(num.top()==-2){
                        cout << '0';
                        return 0;
                    }
                    else{
                        n+=num.top();
                        num.pop();
                    }
                }
            }
        }
    }
    int answer=0;
    while(1){
        if(num.empty()==1){
            cout << answer << endl;
            return 0;
        }
        else{
            answer+=num.top();
            num.pop();
        }
    }
}