#include <bits/stdc++.h>
using namespace std;

int arr[200002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ddsort.inp", "r", stdin);
    freopen("ddsort.out", "w", stdout);
    int n, tmp;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    tmp = arr[0];
    cout << tmp << " ";
    for(int i = 0; i < n; ++i){
        if(arr[i] != tmp){
            tmp = arr[i];
            cout << tmp << " ";
        }
    }
}