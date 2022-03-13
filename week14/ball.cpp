#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("ball.inp", "r", stdin);
    freopen("ball.out", "w", stdout);
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    cout << arr[1];
}