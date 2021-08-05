#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("sumcmax1.inp", "r", stdin);
    freopen("sumcmax1.out", "w", stdout);
    int n, k, max = 0;
    cin >> n >> k;
    --k;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    max = arr[k];
    for(int i = k; i >= 0; --i){
        int ano = 0;
        for(int x = i; x <= k; ++x){
            ano += arr[x];
        }
        if(ano > max){
            max = ano;
        }
    }
    cout << max;
}