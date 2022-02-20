#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;

// optional


// functions


int main(){
    // freopen("cathinh.inp", "r", stdin);
    // freopen("cathinh.out", "w", stdout);
    // ios::sync_with_stdio(0);
    // cout.tie(0);
    // cin.tie(0);
    cin >> n >> k;
    if(n == k) cout << 1;
    else{
        while(n >= 0 && k >= 0){
            if(n > k){
                n -= n / k * k;
                ans += n / k;
            }else if(n < k){
                k -= k / n * n;
                ans += k / n;
            }else{
                ++ans;
                break;
            }
        }
        cout << ans;
    }
}