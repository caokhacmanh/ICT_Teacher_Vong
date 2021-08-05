#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[200000], brr[200000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    freopen("cs1.inp", "r", stdin);
    freopen("cs1.out", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i < m; ++i){
        cin >> brr[i];
    }
    sort(arr, arr + n);
    sort(brr, brr + m);
    reverse(brr, brr + m);
    cout << max(abs(arr[0]-brr[0]), abs(brr[m-1]-arr[n-1]));
    
}