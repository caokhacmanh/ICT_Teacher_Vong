#include <bits/stdc++.h>
using namespace std;


int arr[200000];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("bn.inp", "r", stdin);
    freopen("bn.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        for(int t = i - 1; t >= 0; --t){
            if(arr[t] == arr[i]){
                cout << t+1;
                break;
            }
            cout << 0 << " ";
        }
    }
    
}