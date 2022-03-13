#include <bits/stdc++.h>
using namespace std;

int n, maxo = -1000000;
int arr[500002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("maxprefix.inp", "r", stdin);
    freopen("maxprefix.out", "w", stdout);
    cin >> n;
    // maxo = -1000000;
    for(int i = 0 ; i < n; ++i){
        cin >> arr[i];
        if(arr[i] > maxo){
            maxo = arr[i];
        }
        cout << maxo << " ";
    }
}