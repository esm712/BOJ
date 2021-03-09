#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

stack <int> st;
int main(void){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        if(s=="push"){
            int n;
            cin >> n;
            st.push(n);
        }
        else if(s=="pop"){
            if(st.empty()==1){
                cout << "-1" << endl;
            }
            else{
                cout << st.top() << endl;
                st.pop();
            }
        }
        else if(s=="size"){
            cout << st.size() << endl;
        }
        else if(s=="empty"){
            cout << st.empty() << endl;
        }
        else{
            if(st.empty()==1){
                cout << "-1" << endl;
            }
            else{
                cout << st.top() << endl;
            }
        }
    }
}