#include <bits/stdc++.h>
using namespace std;

int arr[101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("xsa.inp", "r", stdin);
    freopen("xsa.out", "w", stdout);
    int n, tmp, run = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> tmp;
        if(tmp >= 0){
            arr[run] = tmp;
            ++run;
        }
    }
    sort(arr,arr+run);
    for(int i = 0; i < run; ++i){
        cout << arr[i] << " ";
    }
}