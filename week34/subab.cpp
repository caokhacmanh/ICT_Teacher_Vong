#include <bits/stdc++.h>
using namespace std;

// necces
int n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
bool chk = true;
string s;

// optional
int recursion(int r, int chkInt);

int main(){
    // optimize and files
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("subab.inp", "r", stdin);
    freopen("subab.out", "w", stdout);

    cin >> s;
    cout << recursion(s.length() - 1, 0);
}

int recursion(int r, int chkInt){
    if(r <= 0) return 0;
    if(s[r] == 'B' && r > 0){
        if(s[r-1] == 'A'){
            chkInt = 1;
        }
    }
    return chkInt + recursion(r - 1, 0);
}