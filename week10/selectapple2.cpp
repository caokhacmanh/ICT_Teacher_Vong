#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("selectapple2.inp", "r", stdin);
    freopen("selectapple2.out", "w", stdout);
    long long n, tmp = 1, max = 1;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(long long i = 1; i <= 2*n; ++i){
        if(arr[i] == arr[i - 1]){
            ++tmp;
        }else{
            if(tmp > max){
                max = tmp;
                tmp = 1;
            }
        }
    }
    
    
    cout << max;
}