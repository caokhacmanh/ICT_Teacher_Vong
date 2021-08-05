#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sortlist.inp", "r", stdin);
    freopen("sortlist.out", "w", stdout);
    int n;
    cin >> n;
    int a = 0;
    pair<int, int> arr[n];
    for(int i = 0; i < n; ++i){
        cin >> a;
        arr[i].first = a;
        cin >> a;
        arr[i].second = a;
    }
    sort(arr, arr + n);
    for(int i = 0; i < n; ++i){
        cout << arr[i].first << " ";
        cout << arr[i].second << "\n";
    }


}