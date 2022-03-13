#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, q = 0, ins = 0, ans = 0, run = 0, tmp = 0;
bool chk = false;

// optional

// funcs

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("phatkeo.inp", "r", stdin);
    freopen("phatkeo.out", "w", stdout);
    cin >> n >> k;
    run = n;
    for(int i = 1; i < k - 1; ++i){
        cout << i << " ";
        run -= i;
    }
    cout << run;
}