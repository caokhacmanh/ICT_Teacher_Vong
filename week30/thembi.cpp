#include <bits/stdc++.h>
using namespace std;

// Necessary for every codes
int n, k, a, b, run, tmp;
bool chk = false;

// Optional
int arr[10002];
int maxo = -99999, sum = 0;

int main(){

    // For input and output
    freopen("thembi.inp", "r", stdin);
    freopen("thembi.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] > maxo){
            maxo = arr[i];
        }
    }
    cout << maxo * n - sum;

}