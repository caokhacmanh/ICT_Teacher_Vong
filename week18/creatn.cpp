#include <bits/stdc++.h>
using namespace std;

long long arr[1002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("creatn.inp", "r", stdin);
    freopen("creatn.out", "w", stdout);
    long long n, sum = 0;
    cin >> n;
    for(long long i = 0; i < 3*n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + (3*n));
    ++n;
    while(--n){
        // cout << "n: " << n << "\n";
        sum += arr[3*n - 1] + arr[3*n - 2] + arr[3*n - 3];
        sum *= 10;
    }
    cout << sum / 10;
}