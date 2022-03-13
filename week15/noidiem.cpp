#include <bits/stdc++.h>
using namespace std;

pair<int,int> arr[200002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("noidiem.inp", "r", stdin);
    freopen("noidiem.out", "w", stdout);
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i].first;
        arr[i].second = 1;
    }
    for(int i = 0; i < n; ++i){
        cin >> arr[i+n].first;
        arr[i+n].second = 0;
    }
    sort(arr, arr + (n*2));

    int tmp = 0;
    for(int i = 0; i < n*2; ++i){
        for(int j = i; j < n*2 - 1; ++j){
            if(arr[i].second != arr[j+1].second){
                ++tmp;
                i = j+1;
                break;
            }
        }
    }
    cout << tmp;

}