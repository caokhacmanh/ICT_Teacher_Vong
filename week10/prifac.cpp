#include <bits/stdc++.h>
using namespace std;

bool check(long long i){
    for(long long x = i + 1; x < i; ++x){
        if(i%x==0){
            return false;
        }
    }
    return true;
}

int main(){
    freopen("prifac.inp", "r", stdin);
    freopen("prifac.out", "w", stdout);
    long long n, arr[200], run = 0;
    cin >> n;
    for(long long i = 2; i <= n; ++i){
        if(check(i)){
            while(n%i==0){
                arr[run] = i;
                ++run;
                n /= i;
            }
            
        }
    }
    for(long long i = 0; i < run - 1; ++i){
        cout << arr[i] << "*";
    }
    cout << arr[run-1];
}