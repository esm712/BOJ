#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main() {
    int N,M,E;
    cin >> N >> M >> E;
    stack <int> left;
    queue <int> right;
    int cnt=0;
    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        if(num<E){
            left.push(E-num);
        }
        else if(num>E){
            right.push(num-E);
        }
        else{
            cnt++;
        }
    }
    int a=0;
    int b=0;
    while(1){
        if(cnt==M){
            break;
        }
        if(left.top()>right.front()){
            b=right.front();
            right.pop();
            cnt++;
        }
        else{
            a=left.top();
            left.pop();
            cnt++;
        }
    }
    cout << a+b;
    return 0;
}