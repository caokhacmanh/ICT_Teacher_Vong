#include <bits/stdc++.h>
using namespace std;

int n;
pair<int,int> arr[200000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    freopen("sortpos.inp", "r", stdin);
    freopen("sortpos.out", "w", stdout);
    cin >> n;
    for(int i = 0;i < n; ++i){
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr, arr + n);
    for(int i = 0; i < n; ++i){
        cout << arr[i].second + 1 << " ";
    }
}