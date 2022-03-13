#include <bits/stdc++.h>
using namespace std;

long long int checkprime(long long int wew){
    if(wew < 2){
        return 0;
    }
    for(long long int b = 2; b*b <= wew; ++b){
        if(wew % b == 0){
            return 0;
        }
    }
    return 1;
    
}

int main(){
    freopen("checkprime.inp", "r", stdin);
    freopen("checkprime.out", "w", stdout);
    long long int n = 0;
    cin >> n;
    long long int a[n];
    for(long long int m = 0; m < n; ++m){
        cin >> a[m];
    }
    for(long long int i = 0; i < n; ++i){
        cout << checkprime(a[i]) << "\n";
    }
}