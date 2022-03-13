#include <bits/stdc++.h>
using namespace std;

long long doit(long long n){
    if(n < 2){
        return 0;
    }
    long long count = 0;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    freopen("NumPrimeInSeg.inp", "r", stdin);
    freopen("NumPrimeInSeg.out", "w", stdout);
    long long a, b, n, sum = 0;
    cin >> n;
    for(long long i = 0; i < n; ++i){
        cin >> a >> b;
        for(long long ii = a; ii <= b; ++ii){
            sum += doit(ii);
        }
        cout << sum << "\n";
        sum = 0;
    }

}