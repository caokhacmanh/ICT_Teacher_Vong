#include <bits/stdc++.h>
using namespace std;

bool check(long long need){
    long long toc = need % 10;
    while(need > 0){
        if(need % 10 != toc){
            return false;
            break;
        }
        need = need / 10;
    }
    return true;
}

int main(){
    freopen("samedigitsmin.inp", "r", stdin);
    freopen("samedigitsmin.out", "w", stdout);
    long long x, y = 0, n, y2 = 0;
    cin >> n;
    long long arr[n];
    for(long long l = 0; l < n; ++l){
        cin >> x;
        y = 0;
        y2 = 1;
        while(check(y) == false || y <= x){
            if(y % 10 == 9){
                y2 = y2 * 10 + 1;
                y = 0;
            }
            y += y2;
            
        }
        y -= y2;
        if(y == 0){
            y2 = y2 / 10;
            y = y2 * 9;
        }
        arr[l] = y;
    }
    for(int l = 0; l < n; ++l){
        cout << arr[l] << "\n";
    }
}