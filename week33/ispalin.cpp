#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
string st;
bool chk = true;

// optional
int chkInt = 1;

// function
int recursion(int r);

int main(){
    // optimize
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ispalin.inp", "r", stdin);
    freopen("ispalin.out", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; ++i){
        chkInt = 1;
        cin >> st;
        cout << recursion(st.length() - 1) << "\n";
    }
}

int recursion(int r){
    if(r == -1) return chkInt;
    if(chkInt == 0 || st[r] != st[st.length() - r - 1]) return 0;
    chkInt = recursion(r - 1);
    return chkInt;
}