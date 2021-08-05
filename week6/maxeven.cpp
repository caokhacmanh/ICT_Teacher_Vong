#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("maxeven.inp", "r", stdin);
    freopen("maxeven.out", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int max;
    for(int i = 0; i < n; ++i){
        if(arr[i] % 2 == 0){
            max = arr[i];
            goto start1;
        }
    }
    cout << "IMPOSSIBLE";
    goto end;
    start1:
    for(int i = 0; i < n; ++i){
        if(arr[i] % 2 == 0 && arr[i] > max){
            max = arr[i];
        }
    }
    cout << max;
    end:
    n = 0;
}