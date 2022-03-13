#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
bool chk = true;

// optional
long long arr[200002];

// function
long long recursion(long long r);

int main(){
    // optimize
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tongdd.inp", "r", stdin);
    freopen("tongdd.out", "w", stdout);

    cin >> n;
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
    }
    cout << pow(-1, n % 2) * recursion(n - 1) << "\n";
}

long long recursion(long long r){
    if(r == -1) return 0;
    // cout << pow(-1, r) * arr[r] + recursion(r - 1) << " i\n";
    return pow(-1, r % 2) * arr[r] + recursion(r - 1);
}