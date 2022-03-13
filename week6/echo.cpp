#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("echo.inp", "r", stdin);
    freopen("echo.out", "w", stdout);
    int n;
    cin >> n;
    for(int wtf = 0; wtf < n; ++wtf){
        string s;
        bool check = true;
        cin >> s;
        if(s.length() % 2 == 0){
            for(int i = 0; i < s.length() / 2; ++i){
                if(s[i] != s[i+s.length()/2]){
                    check = false;
                }
            }
            if(check){
                cout << "1" << "\n";
            }else{
                cout << "0" << "\n";
            }
        }else{
            cout << "0" << "\n";
        }
    }
}