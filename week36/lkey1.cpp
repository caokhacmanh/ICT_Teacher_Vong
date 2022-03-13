#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, tmp = 0, ins = 0, run = 0;
bool chk = false;
string s;

//optional


// funcs


// main
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("lkey1.inp", "r", stdin);
    freopen("lkey1.out", "w", stdout);

    cin >> s;
    for(int t = 0; t < s.length() - 1; ++t){
        tmp = s[t];
        ins = s[t+1];
        ans += abs(ins - tmp);
    }
    cout << ans;
}