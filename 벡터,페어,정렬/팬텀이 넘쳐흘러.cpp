#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector <int> a(100001);
    vector <int> b(100001);

    int aint;
    int bint;
    for(int i=0; i<n; i++){
        cin >> aint;
        cin >> bint;
        a.push_back(aint);
        b.push_back(bint);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int begin;
    int end;
    end=a.back();
    for(int i=0; i<n-1; i++){
        b.pop_back();
    }
    begin=b.back();

    if(begin>=end){
        cout << "0" << endl;
    }
    else{
        cout << end-begin << endl;
    }
    return 0;
}