#include <bits/stdc++.h>
using namespace std;

long long arr[200002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("onec.inp", "r", stdin);
    freopen("onec.out", "w", stdout);
    long long n, pos = 0, all = 0;
    cin >> n;
    pos = n / 2;
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(long long i = 0; i < n; ++i){
        all += abs(arr[i] - arr[pos]);
    }
    cout << all;
}