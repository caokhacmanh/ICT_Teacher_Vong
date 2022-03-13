#include <bits/stdc++.h>
using namespace std;

int n, sum = 0;
int arr[200002];

int main(){
    freopen("tuple3.inp", "r", stdin);
    freopen("tuple3.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int k = arr[n-1];
    for(int i = 0)
}