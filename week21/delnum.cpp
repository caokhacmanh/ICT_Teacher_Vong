#include <bits/stdc++.h>
using namespace std;

long long arr[1000000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("delnum.inp", "r", stdin);
    freopen("delnum.out", "w", stdout);
    long long n, ans = 0, tmp = 0;
    cin >> n;
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for(long long t = 0; t < n; ++t){
        tmp = 0;
        for(long long i = 0; i < n; ++i){
            if(arr[t] % arr[i] == 0 || arr[i] % arr[t] == 0) ++tmp;
        }
        if(tmp > ans) ans = tmp;
    }
    cout << n - ans + 1;
}