#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tallest.inp", "r", stdin);
    freopen("tallest.out", "w", stdout);
    long long n, max = 0;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(long long i = 0; i < n; ++i){
        if(arr[i] == max){
            cout << i + 1 << " ";
        }
    }

}