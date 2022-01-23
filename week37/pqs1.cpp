#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0;
bool chk = false;
string s;

// optional parameters


// functions
int check(int a){
    if(a == 2) return 2;
    else{
        for(int i = 2; i <= sqrt(a); i++){
            if(a % i == 0){
                return 0;
            }
        }
        return a;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("pqs1.inp", "r", stdin);
    freopen("pqs1.out", "w", stdout);

    cin >> k;
    while(k--){
        ans = 0;
        cin >> n;

        for(int i = 2; i <= n; ++i){
            ans += check(i);
        }

        cout << ans << "\n";
    }
}