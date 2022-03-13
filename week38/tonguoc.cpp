#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, ins = 0, ans = 0, run = 0, tmp = 0;
bool chk = false;

// Optional
long long a, b, bord = 0;

// functions


int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("tonguoc.inp", "r", stdin);
    freopen("tonguoc.out", "w", stdout);

    cin >> a >> b;
    for(long long i = 1; i <= sqrt(a); ++i){
        if(a % i == 0){
            if(b%(3*i) == 0){
                ans += i;
            }
            long long j = a/i;
            if(i < j && b % (3*j) == 0){
                ans += j;
            }
        }
    }
    cout << ans;
}