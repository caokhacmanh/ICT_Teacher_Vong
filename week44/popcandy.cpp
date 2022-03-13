#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;

// optional
long long a, b;

//functions


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("popcandy.inp", "r", stdin);
    freopen("popcandy.out", "w", stdout);

    cin >> n;
    for(long long i = 0; i < n; ++i){
        cin >> a >> b;
        if(max(a,b) > 2*min(a,b)) cout << "NO" << "\n";
        else if((a+b)%3 == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}