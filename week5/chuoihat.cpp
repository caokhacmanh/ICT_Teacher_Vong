#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("chuoihat.inp", "r", stdin);
    freopen("chuoihat.out", "w", stdout);
    int n = 0, a = 0;
    cin >> n;
    string s, b;
    cin >> s;
    b = s;
    reverse(b.begin(), b.end());
    if(s == b){
        ++a;
    }
    for(int i = 0; i < n-1; ++i){
        s = s + s[0];
        s.erase(0, 1);
        b = s;
        reverse(b.begin(), b.end());
        if(s == b){
            ++a;
        }
    }
    cout << a;
}
