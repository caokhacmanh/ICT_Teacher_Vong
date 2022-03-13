#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;

// optional
string s;
bool exitWhile = false;

//functions


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("brackets1.inp", "r", stdin);
    freopen("brackets1.out", "w", stdout);

    cin >> k;
    for(int t = 0; t < k; ++t){
        exitWhile = false;
        cin >> s;
        while(!exitWhile){
            chk = false;
            for(int i = 0; i < s.length(); ++i){
                if(s[i] == '('){
                    for(int j = i; j < s.length(); ++j){
                        if(s[j] == ')'){
                            chk = true;
                            s[i] = ' ';
                            s[j] = ' ';
                            break;
                        }
                    }
                    if(!chk){
                        cout << 0 << "\n";
                        exitWhile = true;
                        break;
                    }
                }else if(s[i] == ')'){
                    cout << 0 << "\n";
                    exitWhile = true;
                    break;
                }
            }
            bool tmpChk = false;
            for(int l = 0; l < s.length(); ++l){
                if(s[l] != ' '){
                    tmpChk = true;
                    break;
                }
            }
            if(!tmpChk){
                cout << 1 << "\n";
                break;
            }
        }
    }
}