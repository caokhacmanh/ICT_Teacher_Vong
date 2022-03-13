#include <bits/stdc++.h>
using namespace std;

int arr[1000002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("mayman.inp", "r", stdin);
    freopen("mayman.out", "w", stdout);
    int n, p, tmp = -1, runner = 1, ansi, ansa;
    cin >> n >> p;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int mino = 0, maxo = n - 1;
    while(mino < maxo){
        if(abs(arr[maxo - runner] - arr[mino]) >= p){
            maxo -= runner;
            if(maxo - mino >= tmp){
                tmp = maxo - mino;
                ansi = mino;
                ansa = maxo;
            }
            runner = 1;
        }else if(abs(arr[maxo] - arr[mino + runner]) >= p){
            mino += runner;
            if(maxo - mino >= tmp){
                tmp = maxo - mino;
                mino;
                ansa = maxo;
            }
            runner = 1;
        }else{
            ++runner;
            
        }
    }
    cout << ansi + 1 << " " << ansa + 1; 
    
}