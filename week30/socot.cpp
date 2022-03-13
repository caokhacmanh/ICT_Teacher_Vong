#include <bits/stdc++.h>
using namespace std;

// Necessary for every codes
long long n = 0, k = 0, run = 0, tmp = 0, ins = 0;
bool chk = false;

// Optional
long long arr[100002];
long long maxo = -99999, sum = 0;

int main(){

    // For input and output
    freopen("socot.inp", "r", stdin);
    freopen("socot.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie(0);

    cin >> n >> k;
    for(long long *i = arr; i < arr + n; ++i){
        cin >> *i;
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);
    for(long long t = k; t--; ){
        if(arr[0] < arr[1]){
            sort(arr, arr + n);
            reverse(arr, arr + n);
        }
        sum += arr[0];
        --arr[0];

    }
    cout << sum;

}