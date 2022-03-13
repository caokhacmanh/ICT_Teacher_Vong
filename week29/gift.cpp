#include <bits/stdc++.h>
using namespace std;

int a = 1, b = 0, tmp = 0, run = 0, inp; // must have variables
int n, k, arr[1000], xrr[1000], ans = 0; // added vars
bool chk = true;

int main(){
    // for fast & files
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("gift.inp", "r", stdin);
    freopen("gift.out", "w", stdout);

    // setup
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> arr[i];
    cin >> k;
    for(int i = 0; i < k; ++i) cin >> xrr[i];

    // core
    for(int x = 0; x < k; ++x){
        ans = 0;
        for(int a = 0; a < xrr[x]; ++a){
            ans += arr[tmp + a];
        }
        tmp += xrr[x];
        cout << ans << "\n";
    }

}