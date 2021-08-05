#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("ReverseArr.inp","r",stdin);
    freopen("ReverseArr.out","w",stdout);
    int n = 0, run = 0;
    cin >> run;
    int arr[run];
    for(int i = 0; i < run; ++i){
        cin >> arr[i];
    }
    reverse(arr, arr + run);
    for(int i = 0; i < run; ++i){
        cout << arr[i] << " ";
    }
}