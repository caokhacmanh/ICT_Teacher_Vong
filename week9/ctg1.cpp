#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("ctg1.inp", "r", stdin);
    freopen("ctg1.out", "w", stdout);
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    long long a1[y1 - x1 + 1];
    long long a2[y2 - x2 + 1];
    long long a3[y3 - x3 + 1];
    long long run = 0;
    for(long long i = x1; i <= y1; ++i){
        a1[run] = i;
        ++run;
    }
    run = 0;
    for(long long i = x2; i <= y2; ++i){
        a2[run] = i;
        ++run;
    }
    run = 0;
    for(long long i = x3; i <= y3; ++i){
        a3[run] = i;
        ++run;
    }
    long long ans = 0;
    for(long long k1 = 0; k1 < y1 - x1 + 1; ++k1){
        for(long long k2 = 0; k2 < y2 - x2 + 1; ++k2){
            for(long long k3 = 0; k3 < y3 - x3 + 1; ++k3){
                if(a1[k1] <= a2[k2] && a2[k2] <= a3[k3] && a1[k1] + a2[k2] > a3[k3] && a3[k3] + a2[k2] > a1[k1] && a1[k1] + a3[k3] > a2[k2] && a1[k1] > 0 && a2[k2] > 0 && a3[k3] > 0){
                    // cout << a1[k1] << " " << a2[k2] << " " << a3[k3] << "\n";
                    ++ans;
                }
            }
        }
    }
    cout << ans;

}

// #include <bits/stdc++.h>
// using namespace std;
// long long x1, y1, x2, y2, x3, y3, x = 0, e = 0;
// long long s = 0;
// int main(){
//     cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//     s = 0;
//     for(long long a = x1; a <= y1; a++){
//         for(long long b = max(a, x2); b <= y2; ++b){
//             if(0 < a && b <= y3){
//                 x = min(a+b-1, y3);
//                 e = max(b, x3);
//                 s=s+x-e+1;
//             }
//         }
//     }
//     cout << s;
// }