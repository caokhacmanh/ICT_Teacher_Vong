#include <bits/stdc++.h>
using namespace std;

// pair<long long,long long> arr[200];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    freopen("moverobot.inp", "r", stdin);
    freopen("moverobot.out", "w", stdout);
    long long n,k,v,l,u;
    cin >> n >> k;
    v = 1;
    for(long long i = 1; i <= k; ++i){
        cin >> l >> u;
        if(l == 1){
            v = v + u;
            v = v % n;
            if(v==0) v = n;
        }
        if(l==2){
            v = v - u;
            if(v < 1){
                v = v + n;
            }

        }
        cout << v << "\n";
    }
    // long long n, k, tmp = 0, lol;
    // cin >> n >> k;
    // lol = 1;
    // ++n;
    // for(long long i = 0; i < k; ++i){
    //     cin >> tmp;
    //     if(tmp == 1){
    //         cin >> tmp;
    //         tmp = tmp % (n - 1);
    //         lol += tmp;
    //     }else{
    //         cin >> tmp;
    //         if(lol <= tmp){
    //             lol += n - 1;
    //         }
    //         lol -= tmp;
    //     }
    //     lol = lol % n;
    //     cout << lol << "\n";
    // }
}