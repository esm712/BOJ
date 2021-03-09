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
        if(0<=s[i]-'0' && s[i]-'0'<=9){
            num.push(s[i]-'0');
        }
        else if(s[i]=='-'){
            int a=num.top();
            num.pop();
            int b=num.top();
            num.pop();
            int c=b-a;
            num.push(c);
        }
        else if(s[i]=='+'){
            int a=num.top();
            num.pop();
            int b=num.top();
            num.pop();
            int c=b+a;
            num.push(c);
        }
        else if(s[i]=='*'){
            int a=num.top();
            num.pop();
            int b=num.top();
            num.pop();
            int c=b*a;
            num.push(c);
        }
        else{
            int a=num.top();
            num.pop();
            int b=num.top();
            num.pop();
            int c=b/a;
            num.push(c);
        }
    }
    cout << num.top() << endl;
}