#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("twob.inp", "r", stdin);
    freopen("twob.out", "w", stdout);
    long long a, b, x, sum = 0;
    cin >> a >> b;
    cin >> x;
    long long max = a;
    for(long long i = 0; i < x; ++i){
        if(a >= 0 && b >= 0){
            if(b > a){
                max = b;
                --b;
            }else{
                max = a;
                --a;
            }
        }
        sum += max;
    }
    cout << sum;
}