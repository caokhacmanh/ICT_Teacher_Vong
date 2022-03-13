#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, tmp = 0, run = 0, ins = 0 ,ans = 0;
bool chk = false;

// optional
string s;
string d[1002], x;
int m;

// funcs



int main(){
    freopen("subdis.inp", "r", stdin);
    freopen("subdis.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    int n = s.length();
    ans = 1;
    for(int len = 1; len < n; ++len){
        m = 0;
        for(int i = 0; i + len <= n; ++i){
            x = s.substr(i, len);
            ++m; d[m] = x;
        }
        sort(d+1,d+1+m);
        ++ans;
        for(int i = 2; i <= m; ++i)
            if(d[i]!=d[i-1]) ++ans;
        
    }
    cout << ans;
}