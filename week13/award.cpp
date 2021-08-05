#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("award.inp", "r", stdin);
    freopen("award.out", "w", stdout);
    int n, max = 0, all = 0;
    cin >> n;
    int a = 0;
    pair<int, int> arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i].first;
        if(arr[i].first > max){
            max = arr[i].first;
        }
        cin >> arr[i].second;
    }
    sort(arr, arr + n);
    for(int i = 0; i < n; ++i){
        if(arr[i].first == max && arr[i].second >= 5){
            ++all;
        }
    }
    cout << all;

    
}