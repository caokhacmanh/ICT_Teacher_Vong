#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("maketeam.inp", "r", stdin);
    freopen("maketeam.out", "w", stdout);
    int n, all[3];
    all[0] = 0;
    all[1] = 0;
    all[2] = 0;
    cin >> n;
    int a = 0;
    pair<int, int> arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    sort(arr, arr + n);
    for(int i = 0; i < n; ++i){
        if(arr[i].second >= 5){
            if(arr[i].first == 8){
                ++all[0];
            }else if(arr[i].first == 9){
                ++all[1];
            }else if(arr[i].first == 10){
                ++all[2];
            }
        }
    }
    sort(all, all + 3);
    cout << all[2];



}