#include<iostream>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
queue <int> q;
stack <int> st;
int main(void){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        q.push(a);
    }
    int num=1;
    while(1){
        if((q.empty()==1)&&(st.empty()==1)){
            cout << "Nice" << endl;
            return 0;
        }
        else if(q.empty()==0 && q.front()==num){
            q.pop();
            num++;
        }
        else if(st.empty()==0 && st.top()==num){
            st.pop();
            num++;
        }
        else if((q.empty()==0 && st.empty()==0) && q.front()>st.top()){
            cout << "Sad" << endl;
            return 0;
        }
        else if(q.front()!=num){
            int b;
            b=q.front();
            q.pop();
            st.push(b);
        }
    }
}