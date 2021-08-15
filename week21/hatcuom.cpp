#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("hatcuom.inp", "r", stdin);
    freopen("hatcuom.out", "w", stdout);
    int n;
    cin >> n;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s;
}