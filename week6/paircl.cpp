#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("paircl.inp", "r", stdin);
    freopen("paircl.out", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    --x;
    if(arr[x] % 2 == 0){
        //chan
        int max;
        for(int i = 0; i < x; ++i){
            if(arr[i] % 2 == 1){
                max = arr[i];
                goto start;
            }
        }
        cout << "IMPOSSIBLE";
        goto end;
        start:
        for(int i = 0; i < x; ++i){
            if(arr[i] % 2 == 1 && arr[i] > max){
                max = arr[i];
            }
        }
        cout << max + arr[x];

    }else{
        //le
        int max;
        for(int i = 0; i < x; ++i){
            if(arr[i] % 2 == 0){
                max = arr[i];
                goto start1;
            }
        }
        cout << "IMPOSSIBLE";
        goto end;
        start1:
        for(int i = 0; i < x; ++i){
            if(arr[i] % 2 == 0 && arr[i] > max){
                max = arr[i];
            }
        }
        cout << max + arr[x];

    }
    end:
    n = 0;
}