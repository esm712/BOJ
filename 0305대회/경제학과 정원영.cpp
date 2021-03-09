#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int N, M;
        cin >> N >> M;
        int a[N],b[M];
        long double asum=0,bsum=0;
        for(int j=0; j<N; j++){
            cin >> a[j];
            asum+=a[j];
        }
        for(int j=0; j<M; j++){
            cin >> b[j];
            bsum+=b[j];
        }
        asum/=N;
        bsum/=M;
        int cnt=0;
        for(int j=0; j<N; j++){
            if(a[j]<asum && a[j]>bsum){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}