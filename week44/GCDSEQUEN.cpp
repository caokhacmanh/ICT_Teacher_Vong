#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;

// optional
long long arr[100002];
long long e;

//functions


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("GCDSEQUEN.inp", "r", stdin);
    freopen("GCDSEQUEN.out", "w", stdout);

    cin >> n >> k;
    for(long long i=0; i<n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    e = arr[1] - arr[0];
    for(long long i=2; i<n; ++i){
        e = __gcd(e, arr[i]-arr[0]);
    }
    for(long long i=0; i<k; ++i){
        cin >> tmp;
        cout << __gcd(e, arr[0] + tmp) << "\n";
    }

}