#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
bool chk = true;

// optional
long long arr[200002], brr[200002], x, y, m;

// function
long long recursion(long long rray[], long long r);

int main(){
    // optimize
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("thds.inp", "r", stdin);
    freopen("thds.out", "w", stdout);

    cin >> n >> m;
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
    }
    cout << recursion(arr, n - 1) << "\n";
    for(long long i = 0; i < m; ++i){
        cin >> brr[i];
    }
    cout << recursion(brr, m - 1);
}

long long recursion(long long rray[], long long r){
    if(r == -1) return 0;
    return rray[r] + recursion(rray, r - 1);
}