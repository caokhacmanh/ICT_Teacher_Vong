#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("SmartBowling.inp", "r", stdin);
    freopen("SmartBowling.out", "w", stdout);
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int total = 0;
    bool check = true;
    sort(arr, arr+n);
    reverse(arr, arr+n);
    for(long long i = 0; i < n; ++i){
        if(arr[i] > 0 && k > 0){
            arr[i] = 0;
            ++total;
            --k;
        }
    }
    long long sum = 0;
    for(long long i = 0; i < n; ++i){
        sum += arr[i];
    }
    cout << sum + total;

}