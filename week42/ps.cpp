#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;
string s;

// optional
pair<double, double> f[1002];
pair<double, int> d[1002];

//functions



int main(){
    
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("ps.inp", "r", stdin);
    freopen("ps.out", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> f[i].first;
        cin >> f[i].second;
    }
    sort(f, f + n);
    for(int i = 0; i < n; ++i){
        d[i].first = f[i].first / f[i].second;
        d[i].second = i;
    }
    sort(d, d + n);
    for(int i = 0; i < n; ++i){
        cout << f[d[i].second].first << " " << f[d[i].second].second << "\n";
    }


}