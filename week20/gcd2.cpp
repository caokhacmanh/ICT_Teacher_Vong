#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int n, ans = 0;
int arr[200002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("gcd2.inp", "r", stdin);
    freopen("gcd2.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum = 0;
    for(int i = 2; i <= arr[n-1]; ++i){
        sum = 0;
        for(int ii = 0; ii < n; ++ii){
            if(arr[ii] % i == 0){
                ++sum;
                
            }
            if(sum == 2){
                break;
            }
        }
        if(sum == 2 && i > ans){
            ans = i;
        }
    }
    cout << ans;
}