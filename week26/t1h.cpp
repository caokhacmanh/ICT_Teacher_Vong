#include <bits/stdc++.h>
using namespace std;

int arr[1002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("t1h.inp", "r", stdin);
    freopen("t1h.out", "w", stdout);
    int n, tmp = -10, sum = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        tmp = max(tmp, arr[i]);
        sum += arr[i];
    }
    cout << (tmp*n) - sum;


}