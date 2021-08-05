#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("tk1234.inp", "r", stdin);
    freopen("tk1234.out", "w", stdout);
    int all = 0, n;
    cin >> n;
    int inp = 0;
    int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    for(int i = 0; i < n; ++i){
        cin >> inp;
        if(inp == 1){
            ++x1;
        }else if(inp == 2){
            ++x2;
        }else if(inp == 3){
            ++x3;
        }else{
            ++x4;
        }
    }
    cout << x1 << "\n" << x2 << "\n" << x3 << "\n" << x4;
}