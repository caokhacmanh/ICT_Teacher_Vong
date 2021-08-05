#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("pairequak1.inp", "r", stdin);
    freopen("pairequak1.out", "w", stdout);
    int n, k, tmp = 0, sum = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i < n; ++i){
        tmp = arr[i];
        for(int ii = i + 1; ii < n; ++ii){
            if(tmp + arr[ii] == k){
                ++sum;
            }
        }
    }
    cout << sum;
}