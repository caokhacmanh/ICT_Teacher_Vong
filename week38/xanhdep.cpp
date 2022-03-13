#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, ins = 0, ans = 0, run = 0, tmp = 0;
bool chk = false;
string s;

// Optional
string arr[1000];

// functions
int longest(string str){
    tmp = 0;
    int returner = 0;
    ins = str[0];
    for(int i = 0; i < str.length(); i++){
        run = str[i];
        if(run == ins){
            ++tmp;
        }else{
            returner = max(returner, tmp);
            tmp = 0;
            ins = str[i];
            --i;
        }
    }
    return returner;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("xanhdep.inp", "r", stdin);
    freopen("xanhdep.out", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        ans = max(ans, longest(arr[i]));
        // cout << longest(arr[i]) << "i\n";
    }
    cout << ans;
}