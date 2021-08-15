#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("khaosatgia.inp", "r", stdin);
    freopen("khaosatgia.out", "w", stdout);
    int n, sum = 0;
    string s;
    cin >> n;
    for(int j = 0 ; j < n; ++j){
        cin >> s;
        int tmp = 10;
        for(int i = 1; i < s.length(); ++i){
            if(tmp > s[i] - '0'){
                tmp = s[i] - '0';
            }
        }
        sum += tmp;
        cout << s[0] << tmp << "\n";
    }
    cout << sum;
    
}   