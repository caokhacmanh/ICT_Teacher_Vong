#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, q = 0, ins = 0, ans = 0, run = 0, tmp = 0;
bool chk = false;

// optional
pair<int, bool> a[200002];

// funcs
bool solve(){
    cin >> n >> k;
    cin >> a[0].first;
    a[0].second = false;
    for(int i = 1; i < n; ++i){
        cin >> a[i].first;
        a[i].second = 0;
    }
    for(int i = 0; i < n; ++i){
            
        for(int j = 0; j < k; ++j){

        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("phatkeo.inp", "r", stdin);
    freopen("phatkeo.out", "w", stdout);
    
    cin >> q;
    for(int t = 0; t<q; ++t){
        cout << solve();
    }
}