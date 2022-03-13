#include <bits/stdc++.h>
using namespace std;

int num(int arr[], int x, int n){
    int sum = 0;
    for(int i = 0; i < n; ++i){
        if(arr[i] == x){
            ++sum;
        }
    }
    return sum;
}

int main(){
    freopen("covid.inp", "r", stdin);
    freopen("covid.out", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int x1 = num(arr, 1, n);
    int x2 = num(arr, 2, n);
    int x3 = num(arr, 3, n);
    int out = n - x1 - x2 - x3;
    out += x2 / 2;
    if(x2 % 2 != 0){
        ++out;
        x1 -= 2;
    }
    out += x3;
    x1 -= x3;
    if(x1 > 0){
        out += x1 / 4;
        if(x1 % 4 != 0){
            ++out;
        }
    }
    cout << out;
}