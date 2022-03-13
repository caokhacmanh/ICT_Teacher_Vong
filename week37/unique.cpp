#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;
string s;

// optional parameters


// functions
int extract(int e){
    int sum = 0;
    while(e > 0){
        sum += e % 10;
        e = e / 10;
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("unique.inp", "r", stdin);
    freopen("unique.out", "w", stdout);

    cin >> k;
    for(int t = 0; t < k; ++t){
        cin >> n;
        if(n > 45) cout << -1 << "\n";
        else if (n == 45) cout << 123456789 << "\n";
        else if (n < 10) cout << n << "\n";
        else{
            run = 10;
            while(true){
                if(extract(run) == n) break;
                ++run;
            }
            cout << run << "\n";
        }
    }
    
}