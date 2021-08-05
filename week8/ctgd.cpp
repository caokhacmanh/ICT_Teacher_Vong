#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("ctgd.inp", "r", stdin);
    freopen("ctgd.out", "w", stdout);
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    long long a = x1, max = y1;
    if(x2 > a){
        a = x2;
    }
    if(x3 > a){
        a = x3;
    }
    if(y2 < max){
        max = y2;
    }
    if(y3 < max){
        max = y3;
    }
    
    long long ans = max - a + 1;
    if(max < a){
        cout << 0;
    }else{
        cout << ans;
    }
    


}