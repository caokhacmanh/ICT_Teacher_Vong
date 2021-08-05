#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("shownice.inp", "r", stdin);
    freopen("shownice.out", "w", stdout);
    long long int n = 0, run = 0, baocao = 0, tong = 0, ca = 0;
    cin >> n;
    long long int a[n], so[n], many[n];
    for(long long int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(long long int i = 0; i < n; ++i){
        tong = 0;
        run = a[i];
        baocao = 0;
        for(long long int x = 0; x < n; ++x){
            if(run == so[x]){
                baocao = 1;
            }
        }
        if(baocao == 0){
            so[i] = run;
            for(long long int x = 0; x < n; ++x){
                if(run == a[x]){
                    ++tong;
                }
            }
        }
        if(tong > run){
            ca = ca + tong - run;
        }
        if(tong < run){
            ca = ca + tong;
        }
    }
    cout << ca;
    // for(long long int i = 0; i < n; ++i){
    //     cout << so[i] << " ";
    // }
    // cout << "\n";
    // for(long long int i = 0; i < n; ++i){
    //     cout << many[i] << " ";
    // }
}
