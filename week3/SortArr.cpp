#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("SortArr.inp","r",stdin);
    freopen("SortArr.out","w",stdout);
    int n = 0, run = 0;
    cin >> run;
    int arr[run];
    for(int i = 0; i < run; ++i){
        cin >> arr[i];
    }
    sort(arr, arr +run);
    for(int i = 0; i < run; ++i){
        cout << arr[i] << " ";
    }
}