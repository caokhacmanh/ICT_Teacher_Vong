#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;

// optional
int arr[1000];

//functions


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("xepphong.inp", "r", stdin);
    freopen("xepphong.out", "w", stdout);

    cin >> k >> n;
    for(int i=0; i<k; ++i){
        arr[i] = 0;
    }
    for(int t = 0; t < n; ++t){
        cin >> tmp;
        for(int i = run; i < k && tmp > 0; ++i){
            if(arr[i] == 0){
                if(tmp >= 2){
                    arr[i] = 2;
                    tmp -= 2;
                    run = max(run, i);
                }else if(tmp == 1){
                    arr[i] = 1;
                    tmp -= 1;
                    run = max(run, i);
                }
            }
        }
        if(tmp > 0){
            for(int i = 0; i < k && tmp > 0; ++i){
                if(arr[i] == 1){
                    ++arr[i];
                    --tmp;
                }
            }
        }
        
    }
    for(int i = 0; i < k; ++i){
        cout << arr[i] << "\n";
    }
}