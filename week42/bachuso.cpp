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
    freopen("bachuso.inp", "r", stdin);
    freopen("bachuso.out", "w", stdout);

    cin >> n;
    c = n % 10;
    n /= 10;
    b = n % 10;
    n /= 10;
    a = n % 10;
    cout << (a + b + c) * 111;

}