#include <bits/stdc++.h>
using namespace std;

int n, m;
pair<int,int> d[400002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    freopen("cs2.inp", "r", stdin);
    freopen("cs2.out", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        cin >> d[i].first;
        d[i].second = 0;
    }
    for(int i = 1; i <= m; ++i){
        cin >> d[i+n].first;
        d[i+n].second = 1;
    }
    int ans = abs(d[1].first - d[1+n].first);
    sort(d+1,d+1+m+n);
    for(int i = 2; i <= m+n; ++i){
        if(d[i].second != d[i-1].second){
            ans = min(ans, d[i].first - d[i-1].first);
        }
    }
    cout << ans;


}