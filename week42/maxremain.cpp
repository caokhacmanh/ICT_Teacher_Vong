#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;
string s;

// optional
int arr[200002];

//functions



int main(){
    
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("maxremain.inp", "r", stdin);
    freopen("maxremain.out", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            ans = max(ans, max(arr[j], arr[i]) % min(arr[i], arr[j]));
        }
    }
    cout << ans;

}