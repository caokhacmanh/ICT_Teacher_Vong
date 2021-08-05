#include <bits/stdc++.h>
using namespace std;

int arr[200002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    freopen("tb.inp", "r", stdin);
    freopen("tb.out", "w", stdout);
    int n, tmp = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        cout << (arr[i] * (i+1)) - tmp << " ";
        tmp += (arr[i] * (i+1)) - tmp;
    }
    

}