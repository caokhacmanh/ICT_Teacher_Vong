#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("CheckPermuM.inp", "r", stdin);
    freopen("CheckPermuM.out", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    bool check = true;
    sort(arr, arr+n);
    for(int i = 0; i < n; ++i){
        if(arr[i] != i + 1){
            check = false;
            break;
        }
    }
    if(check == false){
        cout << "No";
    }else{
        cout << "Yes";
    }

}