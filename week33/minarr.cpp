#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
bool chk = true;

// optional
int arr[1000002];

// function
int recursion(int r, int reRun);

int main(){
    // optimize
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("minarr.inp", "r", stdin);
    freopen("minarr.out", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    cout << recursion(n - 1, 99999999);
}

int recursion(int r, int reRun){
    if(r == -1) return reRun;
    if(arr[r] < reRun) reRun = arr[r];
    return recursion(r - 1, reRun);
}