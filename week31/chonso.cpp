#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, tmp = 0, ins = 0, run = 0;

// optional
int x = 0, sumo = 0;
int arr[200002];

int main(){

    // file in/out and optimize
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("chonso.inp", "r", stdin);
    freopen("chonso.out", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    tmp = 129856;
    for(int t = 2; t--;){
        run = arr[0];
        ins = 0;
        x = 0;
        for(int i = 0; i <= n; i++){
            if(arr[i] == run && arr[i] != tmp){
                ++ins;
            }else if(arr[i] != tmp){
                if(ins > x){
                    x = ins;
                    tmp = arr[i-1];
                }
                run = arr[i];
                ins = 1;
            }
        }
        sumo += x;
    }
    cout << sumo;
}