#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;

// optional
long long t = 0;
long long arr[200002];
long long sumarr[200002];
long long frr[200002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("summaxc.inp", "r", stdin);
    freopen("summaxc.out", "w", stdout);

    cin >> n >> t;
    sumarr[0] = 0;
    for(long long i = 1; i <= n; ++i){
        cin >> arr[i];
        sumarr[i] = sumarr[i-1] + arr[i];
    }
    
}