#include <bits/stdc++.h>
using namespace std;

int arr[20002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("dogcat.inp", "r", stdin);
    freopen("dogcat.out", "w", stdout);
    int d, n, tot = 0, tmp = 0;
    bool check = true;
    cin >> d >> n;
    for(int j = 0; j < d; ++j){
        check = true;
        tot = 0;
        tmp = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        while(check){
            check = false;
            for(int i = 0; i < n - 1; ++i){
                if(arr[i] > arr[i+1]){}
                    swap(arr[i], arr[i+1]);
                    check = true;
                    ++tmp;
                }
            }
        }
        cout << tmp << "\n";
    
    }
}