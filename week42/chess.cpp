#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;
string s;

// optional
int a, b, c;

//functions



int main(){
    
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("chess.inp", "r", stdin);
    freopen("chess.out", "w", stdout);

    cin >> k;
    for(int t = 0; t < k; ++t){
        cin >> n;
        --n;
        if(n < 4){
            cout << 0 << "\n";
        }else if(n == 4 || n == 6){    
            cout << 1 << "\n";
        }else if(n == 5){ 
            cout << 0 << "\n";
        }else if(n < 10){ 
            cout << 0 << "\n";
        }else{
            if(n % 2 == 1) cout << 0 << "\n";
            else cout << 1 << "\n";
        }
    }
}