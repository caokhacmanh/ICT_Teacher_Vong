#include <bits/stdc++.h>
using namespace std;

int arr[200002], brr[200002];
int n, tmp, run = 0;

bool check(int n){
    for(int i = 0; i < run; ++i){
        if(n == brr[i]){
            return false;
        }
    }
    return true;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ddnosort.inp", "r", stdin);
    freopen("ddnosort.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i < n; ++i){
        if(check(arr[i])){
            cout << arr[i] << " ";
            // cout << i << " " << run << "\n";
            brr[run] = arr[i];
            ++run;
        }
    }
}