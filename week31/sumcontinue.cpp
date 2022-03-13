#include <bits/stdc++.h>
using namespace std;

long long n, a;

int solve(long long n, long long a){
    long long s = n*(n+1)/2;
    if(s == a) return 1;
    long long u = s - a;
    if(u%2 != 0) return 0;
    long long x = u/2;
    if(2 <= x && x <= n){
        return -x;
    }
    return 0;
}

int main(){

    // file in/out and optimize
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sumcontinue.inp", "r", stdin);
    freopen("sumcontinue.out", "w", stdout);

    int t;
    cin >> t;
    while(t--){
        cin >> n >> a;
        cout << solve(n, a) << "\n";
    }
    
}