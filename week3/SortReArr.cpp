#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("SortReArr.inp","r",stdin);
    freopen("SortReArr.out","w",stdout);
    int n = 0, run = 0, k = 0;
    cin >> run >> k;
    int arr[run];
    for(int i = 0; i < run; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + k);
    reverse(arr, arr + k);
    for(int i = 0; i < run; ++i){
        cout << arr[i] << " ";
    }
}