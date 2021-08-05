#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("maxuv.inp", "r", stdin);
    freopen("maxuv.out", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int u, v;
    cin >> u >> v;
    --u;
    --v;
    int max = arr[u];
    for(int i = u; i <= v; ++i){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max;
    
}