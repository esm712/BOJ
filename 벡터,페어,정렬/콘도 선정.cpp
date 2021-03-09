#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
    int n;
    cin >> n;
    pair <int, int> p[n];

    for(int i=0; i<n; i++){
        cin >> p[i].first >> p[i].second;
    }

    sort(p,p+n);

    int check=1;

    int first=p[0].first;
    int second=p[0].second;

    for(int i=1; i<n; i++){
        if(p[i].second<second){
            first=p[i].first;
            second=p[i].second;
            check+=1;
        }
    }
    cout << check << endl;
}