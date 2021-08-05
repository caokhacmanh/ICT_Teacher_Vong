#include <bits/stdc++.h>
using namespace std;

long long n, arr[200002], du[200002], sum = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("chiahet7.inp", "r", stdin);
    freopen("chiahet7.out", "w", stdout);
    cin >> n;
    du[0] = 0;
    for(long long i = 1; i <= n; ++i){
        cin >> arr[i];
    }
    for(long long i = 1; i <= n; ++i){
        sum += arr[i] % 7;
        du[i] = sum % 7;
    }
    long long max = 0;
    for(long long i = 1; i <= n; ++i){
        for(long long j = i; j <= n; ++j){
            if(abs(du[j] - du[i - 1]) == 0 && j - i + 1 > max){
                max = j - i + 1;
            }
        }
    }
    cout << max;

}