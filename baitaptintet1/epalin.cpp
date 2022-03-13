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
int solve(string a, int n);

// main
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("EPalin.inp", "r", stdin);
    freopen("EPalin.out", "w", stdout);

    cin >> s;
    cout << solve(s, s.length());

}

int solve(string a, int n){
    int l = 0, r = n - 1;
    while(l <= r){
        if(a[l] == a[r]){
            ++l;
            --r;
        }else{
            --r;
            ++ans;
        }
    }
    return ans;
}