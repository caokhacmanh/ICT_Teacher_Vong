#include <bits/stdc++.h>
using namespace std;

int n, maxo = -1000000;
int arr[500002];
int brr[500002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("maxsufix.inp", "r", stdin);
    freopen("maxsufix.out", "w", stdout);
    cin >> n;
    for(int i = 0 ; i < n; ++i){
        cin >> arr[i];
    }
    for(int i = n - 1 ; i >= 0; --i){
        if(arr[i] > maxo){
            maxo = arr[i];
        }
        brr[i] = maxo;
        // cout << maxo << " ";

    }
    for(int i = 0; i < n; ++i){
        cout << brr[i] << " ";
    }
}