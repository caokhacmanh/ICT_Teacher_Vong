#include <bits/stdc++.h>
using namespace std;

// neccesary
long long n = 0, k = 0, ans = 0, tmp = 0, ins = 0, run = 0;
bool chk = false;
string s;

//optional
long long arr[200002];

// funcs
void doIt();
bool ifPrime(long long p);

// main
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("robotgift.inp", "r", stdin);
    freopen("robotgift.out", "w", stdout);

    cin >> k;
    for(long long l = 0; l < k; ++l){
        doIt();
    }
    
}

bool ifPrime(long long p){
    for(long long i = 2; i <= sqrt(p); ++i){
        if(p % i == 0){
            return false;
        }
    }
    return true;
}

void doIt(){
    ans = -99999999;
    cin >> n;
    long long maxo = -99999999;
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
        if(maxo < arr[i]) maxo = arr[i];
    }
    for(long long i = 2; i <= maxo; ++i){
        if(!(ifPrime(i))) continue;
        tmp = 0;
        for(long long j = 0; j < n; ++j){
            if(arr[j] % i == 0){
                ++tmp;
            }
        }
        if(tmp > ans){
            ans = tmp;
        }
    }
    cout << ans << "\n";
}