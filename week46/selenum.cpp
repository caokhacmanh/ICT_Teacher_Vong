#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, tmp = 0, run = 0, ins = 0 ,ans = 0;
bool chk = false;

// optional
int a[500000];
string s;


// funcs



int main(){
    freopen("selenum.inp", "r", stdin);
    freopen("selenum.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int t = 0; t < n; ++t){
        tmp = 0;
        cin >> s;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] >= '0' && s[i] <= '9'){
                for(int j = i; s[j] >= '0' && s[j] <= '9'; ++j){
                    tmp = j;
                    ans = ans*10 + (s[j] - '0');
                }
                i = tmp+1;
                a[run] = ans;
                ++run;
                ans = 0;
            }
        }
    }
    sort(a, a+run);
    for(int i = 0; i < run; ++i){
        cout << a[i] << "\n";
    }
}