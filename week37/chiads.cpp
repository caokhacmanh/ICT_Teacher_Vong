#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0;
bool chk = false;
string s;

// optional parameters
int arr[500005];
int maxo, mino, minx = 0, maxx = 0;

// functions
int solve(){
    if(minx <= maxx) return 0;
    else{
        for(int t = minx; t < maxx; ++t){
            
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("chiads.inp", "r", stdin);
    freopen("chiads.out", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; ++i) cin >> arr[i];
    maxo = arr[0]; mino = arr[0];
    for(int i = 0; i < n; ++i){
        if(arr[i] < mino){
            mino = arr[i];
            minx = i;
        }
        if(arr[i] > maxo){
            maxo = arr[i];
            maxx = i;
        }
    }
    ans = solve();
    if(ans == 0) cout << "No Index";
    else cout << ans;
}