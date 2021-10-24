#include <bits/stdc++.h>
using namespace std;

// Necessary for every codes
int n, k, a, b, run, tmp;
bool chk = false;

// Optional
int arr[10002];
int mino = 99999, sum = 0;

int main(){

    // For input and output
    freopen("laybi.inp", "r", stdin);
    freopen("laybi.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] < mino){
            mino = arr[i];
        }
    }
    cout << sum - mino * n;

}