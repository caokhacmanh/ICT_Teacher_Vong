#include <bits/stdc++.h>
using namespace std;

int xoa[10000001], n = 0, k = 0, x = 0, s = 0, t = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    freopen("KDELE.inp", "r", stdin);
    freopen("KDELE.out", "w", stdout);
    cin >> n >> k;
    for(int i = 2; i <= n; ++i)
        xoa[i] = 0;
    x = 2;
    while(1){
        while(xoa[x] == 1) ++x;
        t = 1;
        while(t*x <= n){
            if(xoa[t*x] == 0){
                xoa[t*x] = 1;
                ++s;
                if(s == k){
                    cout << t*x;
                    return 0;
                }
            }
            ++t;
        }
    }
    
}