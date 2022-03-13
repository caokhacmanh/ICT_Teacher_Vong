#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;

// optional


//functions


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("cv.inp", "r", stdin);
    freopen("cv.out", "w", stdout);

    ans = 99999999;
    cin >> n;
    for(long long i = 1; i <= sqrt(n); ++i){
        if(n%i==0) ans = min(ans, (i + (n / i))*2);
    }
    cout << ans;
}