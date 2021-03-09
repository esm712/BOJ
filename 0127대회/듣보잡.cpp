#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int N, M;//듣도 못한 사람 수, 보도 못한 사람 수
string a[500001];//듣도 못한 사람 배열
string b[500001];//보도 못한 사람 배열
string c[500001];
string check(int left, int right, string s){
    int mid=(left+right)/2;
    if(left>right){
        if(a[mid]==s){
            return s;
        }
        return "";
    }
    if(a[mid]<=s){
        return check(mid+1,right,s);
    }
    else{
        return check(left,mid-1,s);
    }
}

int main(void){
    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    sort(a,a+N);
    for(int i=0;i<M;i++){
        cin >> b[i];
    }
    sort(b,b+M);
    int count=0;
    for(int i=0;i<M;i++){
        c[i]=check(0, N-1, b[i]);
        if(c[i]!=""){
            count++;
        }
    }
    cout << count << endl;
    for(int i=0;i<M;i++){
        if(c[i]!=""){
            cout << c[i] << endl;
        }
    }
    return 0;
}