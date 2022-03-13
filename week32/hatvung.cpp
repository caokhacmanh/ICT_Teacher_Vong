#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("hatvung.inp", "r", stdin);
    freopen("hatvung.out", "w", stdout);

    long long arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    if((arr[0] + arr[2]) / 2 <= arr[1]) cout << (arr[0] + arr[2]) / 2;
    else cout << (arr[0] + arr[1] + arr[2]) / 3;
}