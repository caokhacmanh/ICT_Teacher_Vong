#include <bits/stdc++.h>
using namespace std;

int arr[100002];
int n, tmp;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("addpoints.inp", "r", stdin);
    freopen("addpoints.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    
}