#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0;
bool chk = false;
string s;

// optional parameters
int arr[500005], del0 = 0, del1 = 0, del2 = 0;

// functions


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("erases.inp", "r", stdin);
    freopen("erases.out", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    del0 = arr[1] - arr[0];
    del1 = arr[2] - arr[0];
    del2 = arr[3] - arr[0];
    for(int i = 0; i < n; ++i){
        tmp = arr[i+1] - arr[i];
        if(tmp > del0){
            del0 = tmp;
        }
    }
    for(int i = 0; i < n - 1; ++i){
        tmp = arr[i+2] - arr[i];
        if(tmp > del1){
            del1 = tmp;
        }
    }
    for(int i = 0; i < n - 2; ++i){
        tmp = arr[i+3] - arr[i];
        if(tmp > del2){
            del2 = tmp;
        }
    }
    cout << max(del0, max(del1, del2));
}