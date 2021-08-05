#include <bits/stdc++.h>
using namespace std;

int n, sum = 0;
int arr[200002];

int main(){
    freopen("jumpincircle.inp", "r", stdin);
    freopen("jumpincircle.out", "w", stdout);
    long long n,m,s;
    cin >> n >> m;
    s= n*(n+1)/2;
    s= s%(m+1);
    cout << s;
}