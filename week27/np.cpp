#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("np.inp", "r", stdin);
    freopen("np.out", "w", stdout);

    int N, tmp = 0, runner = 20;
    cin >> N;
    const int n = (const int) N; 
    for(int i=0; i<n; ++i) cout << 0;
    cout << "\n";
    for(int i=1; i<pow(2, n); ++i){
        bitset<20> bitTmp(i);

        runner = n - 1;
        while(runner >= 0){
            cout << bitTmp[runner];
            --runner;
        }
        // cout << bitTmp;
        cout << "\n";
        
    }
}