#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, tmp = 0, ins = 0, run = 0;
bool chk = false;
string s;

//optional
int t = 0;
int chkInt = 0;

// funcs
string solve(int a[], int n);

// main
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ErasePalin.inp", "r", stdin);
    freopen("ErasePalin.out", "w", stdout);

    cin >> t;
    for(int j = 0; j < t; ++j){
        cin >> n;
        int a[n+1];
        for(int i = 1; i <= n; ++i){
            cin >> a[i];
        }
        cout << solve(a, n) << "\n";
    }
}

bool erase(int x, int a[], int n){
    int b[n], m = 0;
    for(int i = 1; i <= n; ++i){
        if(a[i] != x) b[++m] = a[i];
    }
    for(int i = 1; i <= m; ++i){
        if(b[i] != b[m-i+1]) return false;
    }
    return true;
}

string solve(int a[], int n){
    int l = 1, r = n;
    while(l <= r){
        if(a[l] == a[r]){
            ++l;
            --r;
        }else{
            bool ans1 = erase(a[l], a, n);
            bool ans2 = erase(a[r], a, n);
            if(ans1 == true || ans2 == true) return "Yes";
            return "No";
        }
    }
    return "Yes";
}