#include <bits/stdc++.h>
using namespace std;
long long arr[200002], s, n, x;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("dcd.inp", "r", stdin);
    freopen("dcd.out", "w", stdout);
    cin >> n;
    for(long long i = 1; i <= n; ++i){
        cin >> arr[i];
    }
    sort(arr+1, arr+1+n);
    x = arr[(n+1)/2];
    s = 0;
    for(long long i = 1; i <= n; ++i){
        s = s+abs(arr[i] - x);
    }
    cout << s;
}