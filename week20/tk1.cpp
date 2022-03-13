#include <bits/stdc++.h>
using namespace std;

int n, q, sum = 0, tmp = 0;
int arr[200002];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tk1.inp", "r", stdin);
    freopen("tk1.out", "w", stdout);
    cin >> n >> q;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    bool chk = true;
    for(int j = 0; j < q; ++j){
        sum = 0;
        chk = true;
        cin >> tmp;
        for(int i = 0; chk && i < n; ++i){
            if(arr[i] == tmp){
                ++sum;
                // cout << i << "i ";
            }else if(arr[i] != tmp && arr[i-1] == tmp){
                break;
            }
        }
        cout << sum << "\n";
    }

}