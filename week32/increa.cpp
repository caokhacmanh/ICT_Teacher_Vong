#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
bool chk = true;

// optional
long long arr[1000002];

int main(){
    // Initialize the file system
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("increa.inp", "r", stdin);
    freopen("increa.out", "w", stdout);

    cin >> n;
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
    }
    tmp = arr[0];
    ins = 2;
    for(long long i = 1; i < n; ++i){
        if(arr[i] >= tmp){
            tmp = arr[i];
        }else{
            --ins;
        }
        if(ins == 0){
            break;
        }
    }
    if(ins == 0){
        cout << "No";
    }else {
        cout << "Yes";
    }
}