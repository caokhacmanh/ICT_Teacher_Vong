#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("sumcmax2.inp", "r", stdin);
    freopen("sumcmax2.out", "w", stdout);
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
    }
    long long q;
    cin >> q;
    long long qrr[q];
    for(long long i = 0; i < q; ++i){
        cin >> qrr[i];
    }
    for(long long i = 0; i < q; ++i){
        ///////////
        long long k = qrr[i];
        long long max = 0;
        --k;
        for(long long i = 0; i < n; ++i){
            cin >> arr[i];
        }
        max = arr[k];
        for(long long i = k; i >= 0; --i){
            long long ano = 0;
            for(long long x = i; x <= k; ++x){
                ano += arr[x];
            }
            if(ano > max){
                max = ano;
            }
        }
        cout << max << "\n";
        ///////////
    }
}