#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, tmp = 0, ins = 0, run = 0;
bool chk = false;
string s;

//optional
string s2;

// funcs
int findLetter(char c);

// main
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("lkey2.inp", "r", stdin);
    freopen("lkey2.out", "w", stdout);

    cin >> s;
    cin >> s2;
    for(int t = 0; t < s2.length() - 1; ++t){
        tmp = findLetter(s2[t]);
        ins = findLetter(s2[t + 1]);
        ans += abs(ins - tmp);
    }
    cout << ans;
}

int findLetter(char c){
    for(int t = 0; t < s.length(); ++t){
        if(c == s[t]) return t;
    }
}
