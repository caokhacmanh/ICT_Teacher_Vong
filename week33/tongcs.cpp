#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
string st;
bool chk = true;

// optional


// function
int recursion(int r);

int main(){
    // optimize
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tongcs.inp", "r", stdin);
    freopen("tongcs.out", "w", stdout);

    cin >> st;
    ans = st[st.length() - 1] - '0';
    cout << recursion(st.length() - 1);
}

int recursion(int r){
    if(r == -1) return 0;
    return (st[r] - '0') + recursion(r - 1);
}