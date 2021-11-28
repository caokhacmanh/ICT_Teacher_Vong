#include <bits/stdc++.h>
using namespace std;

// necces
int n = 0, k = 0, tmp = 0, ins = 0, run = 0;
bool chk = true;
string s;

// optional
long long na = 0, ans = 0;

int main(){
    // optimize and files
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("kab.inp", "r", stdin);
    freopen("kab.out", "w", stdout);

    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') na++;
        else ans += na;
    }
    cout << ans;
}