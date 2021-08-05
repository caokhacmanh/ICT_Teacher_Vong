#include <bits/stdc++.h>
using namespace std;

bool check(long long hold[], long long n, long long k){
    long long ret = 0;
    for(long long i = 0; i < n; ++i){
        ret += hold[i] % k;
    }
    if(ret % k == n){
        return true;
    }else{
        return false;
    }
}

int main(){
    // freopen("RemainK.inp", "r", stdin);
    // freopen("RemainK.out", "w", stdout);
    long long n, k, total = 0;
    cin >> n >> k;
    long long arr[n];
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(long long i = 0; i < n; ++i){
        for(long long j = i; j < n; ++j){
            long long hold[j - i + i];
            long long run = i;
            for(long long x = 0; x < j - i + 1; ++x){
                hold[x] = arr[run];
                ++run;
            }
            if(check(hold, j - i + 1, k)){
                ++total;
                // for(long long m = 0; m < j - i + 1; ++m){
                //     cout << hold[m];
                // }
                // cout << "\n";
            }
        }
    }
    cout << total;
}