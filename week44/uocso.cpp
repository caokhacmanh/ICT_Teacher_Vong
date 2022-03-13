#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;

// optional
long long m;
long long arr[200002];

//functions


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("uocso.inp", "r", stdin);
    freopen("uocso.out", "w", stdout);

    cin >> n >> m;
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(long long i = 0; i < m; ++i){
        cin >> tmp;
        run = 0;
        for(long long j = 0; j < n; ++j){
            run += (arr[j] % tmp == 0);
        }
        ans = max(ans, run);
    }
    cout << ans;
}