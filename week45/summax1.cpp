#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, ans = 0, run = 0 , ins = 0, tmp = 0;
bool chk = false;

// optional
long long a[200005];
long long maxed = -99999999, mined = 99999999;

// functions


int main(){
    freopen("summax1.inp", "r", stdin);
    freopen("summax1.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    a[0] = 0;
    for(long long i = 1; i <= n; ++i){
        cin >> a[i];
        a[i] += a[i-1];
    }
    cin >> k;
    for(long long t = 0; t < k; ++t){
        cin >> tmp;
        maxed = -99999999;
        mined = 99999999;
        for(long long i = 0; i <= tmp; ++i){
            mined = min(mined, a[i]);
        }
        for(long long i = tmp; i <= n; ++i){
            maxed = max(maxed, a[i]);
        }
        cout << maxed - mined << "\n";
    }
    
}