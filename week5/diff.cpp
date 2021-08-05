#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("diff.inp", "r", stdin);
    freopen("diff.out", "w", stdout);
    long long int n = 0, big = 0, sma = 10;
    cin >> n;
    string a[n];
    for(long long int i = 0; i < n; ++i){
        big = 0;
        sma = 10;
        cin >> a[i];
        for(long long int x = 0; x < a[i].length(); ++x){
            if(a[i][x] - '0' >= big){
                big = a[i][x] - '0';
            }
        }
        for(long long int x = 0; x < a[i].length(); ++x){
            if(a[i][x] - '0' <= sma){
                sma = a[i][x] - '0';
            }
        }
        cout << big - sma << "\n";
    }

}
