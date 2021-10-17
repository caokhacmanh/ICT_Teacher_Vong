#include <bits/stdc++.h>
using namespace std;

int n, mv, m = 0;
// bitset<8> arr[20];
char arr[20];
string d[2000002];

void solve(int x){
    bitset<20> b(x);
    string s = "";
    for(int i = 0; i <= n-1; ++i){
        if(b[i] == 1){
            s = s + arr[i];
        }
    }
    sort(s.begin(), s.end());
    ++m;
    d[m] = s;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("mstring.inp", "r", stdin);
    freopen("mstring.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    mv = 1<<n; // m = 2^n
    for(int i = 1; i < mv; ++i){
        solve(i);
    }
    sort(d + 1, d + 1 + m);
    for(int i = 1; i <= m; ++i){
        cout << d[i] << "\n";
    }
}