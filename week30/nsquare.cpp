#include <bits/stdc++.h>
using namespace std;

// Necessary for every codes
int n = 0, k = 0, run = 0, tmp = 0, ins = 0;
bool chk = false;

// Optional
int sum = 0;

int main(){

    // For input and output
    freopen("nsquare.inp", "r", stdin);
    freopen("nsquare.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(pow((int)(sqrt(i*i - j)),2) == (i*i - j)){
                ++sum;
            }
        }
    }
    cout << sum;

}