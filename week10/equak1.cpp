#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("equak1.inp", "r", stdin);
    freopen("equak1.out", "w", stdout);
    int n, k, temp = 0, sum = 0;
    cin >> n >> k;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        if(temp == k){
            ++sum;
        }
    }
    cout << sum;
}