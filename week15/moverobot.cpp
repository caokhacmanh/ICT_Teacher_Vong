#include <bits/stdc++.h>
using namespace std;

// pair<int,int> arr[200];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    freopen("moverobot.inp", "r", stdin);
    freopen("moverobot.out", "w", stdout);
    int n, k, tmp = 0, lol;
    cin >> n >> k;
    lol = 1;
    for(int i = 0; i < k; ++i){
        cin >> tmp;
        if(tmp == 1){
            cin >> tmp;
            lol += tmp;
        }else{
            cin >> tmp;
            lol -= tmp;
        }
        lol = abs(lol);
        cout << lol % n << "\n";
    }
}