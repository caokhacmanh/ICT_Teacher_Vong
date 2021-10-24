#include <bits/stdc++.h>
using namespace std;

// Necessary for every codes
int n = 0, k = 0, run = 0, tmp = 0, ins = 0;
bool chk = false;

// Optional
int sum = 0;

int main(){

    // For input and output
    freopen("bsquare.inp", "r", stdin);
    freopen("bsquare.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n - 1; ++i){
        for(int j = i + 1; j <= n; ++j){
            if(pow((int)(sqrt(i*j)),2) == i*j){
                ++sum;
            }
        }
    }
    cout << sum;

}