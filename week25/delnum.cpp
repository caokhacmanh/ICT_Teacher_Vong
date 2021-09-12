#include <bits/stdc++.h>
using namespace std;

pair<int, bool> arr[1000000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("delnum.inp", "r", stdin);
    freopen("delnum.out", "w", stdout);
    int n, ans = 0, tmp = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i].first;
    }
    sort(arr, arr + n);
    for(int t = 0; t < n; ++t){
        if(arr[t].second != 1){
            tmp = 0;
            for(int i = t + 1; i < n; ++i){
                if(arr[i].first % arr[t].first == 0){
                    ++tmp;
                    arr[i].second = 1;
                }
            }
            ans = max(tmp, ans);
        }
    }
    cout << n - ans;
}