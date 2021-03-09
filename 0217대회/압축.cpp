#include<iostream>
#include<algorithm>
#include<string.h>
#include<stack>
using namespace std;
string s;
stack <int> num1;
stack <int> num2;
stack <int> multi;
int main(void){
    cin > s;
    int len=s.length();
    int cnt=0;
    for(int i=0; i<len; i++){
        if(s[i]-'0'>=0 && s[i]-'0'<10 && s[i+1]=='('){
            num1.push(cnt);
            multi.push(s[i]);
            cnt=0;
        }
        else if(s[i]==')'){
            num2.push(cnt);
            cnt=0;
        }
        else{
            cnt++;
        }
    }
}