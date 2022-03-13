#include <bits/stdc++.h>
using namespace std;

int arr[1000002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("divisor.inp", "r", stdin);
    freopen("divisor.out", "w", stdout);
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int sum = 0;
    for(int i = 0; i < n - 1; ++i){
        
        for(int j = i + 1; j < n; ++j){
            if(arr[j] % arr[i] == 0) ++sum;
        }
    }
    cout << sum;
    
    
}