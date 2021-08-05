#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("SeqPalin.inp","r",stdin);
    freopen("SeqPalin.out","w",stdout);
    int n = 0, run = 0, k = 0;
    cin >> run;
    int arr[run];
    for(int i = 0; i < run; ++i){
        cin >> arr[i];
    }
    int arr2[run];
    for(int i = 0; i < run; ++i){
        arr2[i] = arr[i];
    }
    reverse(arr2, arr2 + run);
    for(int i = 0; i < run; ++i){
        if(arr2[i] == arr[i]){
            ++k;
        }
    }
    if(k == run){
        cout << "Palin";
    }else{
        cout << "No Palin";
    }
}