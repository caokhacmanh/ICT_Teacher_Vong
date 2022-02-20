#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, ins = 0, ans = 0, run = 0, tmp = 0;
bool chk = false;

// optional
long long x[200002], s[200002];
long long a, b, sa, sb;

// funcs

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("length.inp", "r", stdin);
    freopen("length.out", "w", stdout);

    cin >> n >> k;
    s[0] = 0;
    for(long long i = 1; i <= n; ++i){
        cin >> x[i];
        s[i] = s[i-1] + x[i];
    }
    for(long long t = 0; t < k; ++t){
        cin >> a >> b;
        tmp = b/2;
        sa = s[tmp] - s[a-1];
        sb = s[b] - s[tmp];
        cout << sb - sa << "\n";
    }


    

}