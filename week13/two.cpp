#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("two.inp", "r", stdin);
    freopen("two.out", "w", stdout);
    int n, min = -1, tmp = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            tmp = j - i;
            if(arr[j] == arr[i]){
                if(min == -1){
                    min = tmp*tmp;
                }else if(tmp*tmp < min){
                    min = tmp*tmp;
                }
            }
        }
    }
    cout << min;
}