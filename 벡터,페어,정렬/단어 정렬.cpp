#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

int main(void){
    int n;
    cin >> n;
    pair <int, string> a[n];
    char word[51];
    int length;
    for(int i=0; i<n; i++){
        cin >> word;
        length=strlen(word);
        a[i].first=length;
        a[i].second=word;
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(a[i].second==a[i+1].second){
            continue;
        }
        cout <<a[i].second << endl;
    }
    return 0;
}