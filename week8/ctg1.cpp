#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("ctg1.inp", "r", stdin);
    freopen("ctg1.out", "w", stdout);
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int a1[y1 - x1 + 1];
    int a2[y2 - x2 + 1];
    int a3[y3 - x3 + 1];
    int run = 0;
    for(int i = x1; i <= y1; ++i){
        a1[run] = i;
        ++run;
    }
    run = 0;
    for(int i = x2; i <= y2; ++i){
        a2[run] = i;
        ++run;
    }
    run = 0;
    for(int i = x3; i <= y3; ++i){
        a3[run] = i;
        ++run;
    }
    int ans = 0;
    for(int k1 = 0; k1 < y1 - x1 + 1; ++k1){
        for(int k2 = 0; k2 < y2 - x2 + 1; ++k2){
            for(int k3 = 0; k3 < y3 - x3 + 1; ++k3){
                if(a1[k1] <= a2[k2] && a2[k2] <= a3[k3] && a1[k1] + a2[k2] > a3[k3] && a3[k3] + a2[k2] > a1[k1] && a1[k1] + a3[k3] > a2[k2] && a1[k1] > 0 && a2[k2] > 0 && a3[k3] > 0){
                    // cout << a1[k1] << " " << a2[k2] << " " << a3[k3] << "\n";
                    ++ans;
                }
            }
        }
    }
    cout << ans;

}