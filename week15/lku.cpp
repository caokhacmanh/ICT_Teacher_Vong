#include <bits/stdc++.h>
using namespace std;

long long arr[400002];

bool check(long long run, long long nd){
    for(long long i = 0; i < run; ++i){
        if(arr[i] == nd){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("lku.inp", "r", stdin);
    freopen("lku.out", "w", stdout);
    long long n;
    cin >> n;
    long long run = 0;
    for(long long i = 1; i <= sqrt(n); ++i){
        if(n%i==0 && check(run,i)){
            arr[run] = i;
            ++run;
            // if(i != n/i){
                arr[run] = n/i;
                ++run;
            // }
        }
    }
    sort(arr, arr + run);
    for(long long i = 0; i < run; ++i){
        cout << arr[i] << " ";
    }
}