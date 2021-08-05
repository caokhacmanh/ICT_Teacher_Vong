#include <bits/stdc++.h>
using namespace std;

long long torun = 0;
long long t, n, k, all = 0;

void solve(long long arr[]){
    long long sum = 0, s = 0, dem = 0;
    for(long long i = 1; i <= n; ++i){
        sum += arr[i];
    }
    if(k == 1){
        if(sum % 2 == 1){
            cout << "Yes" << "\n";
        }else{
            cout << "No" << "\n";
        }
    }
    for(long long i = 1; i <= n; ++i){
        s = s + arr[i]; sum = sum - arr[i];
        if(s % 2 != 0){
            ++dem;
            s = 0;
            if(dem == k - 1){
                if(sum % 2 != 0){
                    cout << "Yes" << "\n";
                    return;
                }else{
                    cout << "No" << "\n";
                    return;
                }
            }
        }
    }
}
int main(){
    freopen("SplitKO.inp", "r", stdin);
    freopen("SplitKO.out", "w", stdout);
    cin >> t;
    long long ans[t];
    for(long long j = 0; j < t; ++j){
        cin >> n >> k;
        long long arr[n], tmp = 0;
        for(long long i = 0; i < n; ++i){
            cin >> arr[i];
            tmp += arr[i];
        }
        // solve(arr);
        if(k % 2 == 0){
            if(tmp % 2 == 0){
                cout << "Yes" << "\n";
            }else{
                cout << "No" << "\n";
            }
        }else{
            if(tmp % 2 == 0){
                cout << "No" << "\n";
            }else{
                cout << "Yes" << "\n";
            }
        }

        
    }
    
}