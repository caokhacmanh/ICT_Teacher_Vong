#include <bits/stdc++.h>
using namespace std;

int n, k, s= 0, xoa = 0;
string x;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("xoaso.inp", "r", stdin);
    freopen("xoaso.out", "w", stdout);
    cin >> k >> x;
    n = x.length();
    while(xoa < k && s == 0){
        s = 1;
        for(int i = 1; i < x.length(); ++i){
            if(x[i-1] < x[i]){
                ++xoa;
                x.erase(i-1,1);
                s= 0;
                break;
            }
        }
    }
    if(xoa < k){
        int m = x.length();
        int e = k - xoa;
        x.erase(m-e,e);
    }
    cout << x;
    
}