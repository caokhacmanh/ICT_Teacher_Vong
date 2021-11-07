#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
bool chk = true;

// optional


// function
long long recursion(long long r);

int main(){
    // optimize
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tongn.inp", "r", stdin);
    freopen("tongn.out", "w", stdout);

    cin >> n;
    cout << recursion(n);
}

long long recursion(long long r){
    if(r == 0) return 0;
    return r + recursion(r - 1);
}