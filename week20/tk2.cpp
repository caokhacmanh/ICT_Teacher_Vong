#include <bits/stdc++.h>
using namespace std;

int n, q, sum = 0, tmp = 0;
int arr[200002];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tk2.inp", "r", stdin);
    freopen("tk2.out", "w", stdout);
    cin >> n >> q;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int j = 0; j < q; ++j){
        sum = 0;
        cin >> tmp;
        for(int i = 0;i < n; ++i){
            if(arr[i] >= tmp){
                sum = n - i;
                break;
            }
        }
        cout << sum << "\n";
    }

}

//test
// 10 3
// 1 2 3 4 5 6 7 8 9 10
