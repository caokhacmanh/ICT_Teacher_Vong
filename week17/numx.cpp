#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("numx.inp", "r", stdin);
    freopen("numx.out", "w", stdout);
    long long arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr, arr+4);
    cout << arr[2] - arr[1] + 1;
}