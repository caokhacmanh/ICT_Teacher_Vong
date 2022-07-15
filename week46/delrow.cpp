#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, tmp = 0, run = 0, ins = 0 ,ans = 0;
bool chk = false;

// optional
string x[5002]; // store row
string y[5002]; // store collumn

// funcs



int main(){
    // freopen("delrow.inp", "r", stdin);
    // freopen("delrow.out", "w", stdout);
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    ans = 1; // at least 1 row remain
    cin >> n >> k;
    for(int i = 0; i < k; ++i) y[i] = ""; // prepare y

    for(int t = 0; t < n; ++t){
        cin >> x[t];
    }

    // turn 90 degree from row to collumn
    for(int t = 0; t < k; ++t){
        for(int i = 0; i < n; ++i){
            y[t][i] = x[i][t]; // program suddenly stop here, any solution?
        }
    }

    // reverse collumn to easier comparation
    for(int t = 0; t < k; ++t){
        reverse(y[t].begin(), y[t].end());
    }

    // compare until every elements are different from each other
    for(int i = 0; i < n; ++i){ // i is the node
        chk = false;
        sort(x[n-i-1].begin(), x[n-i-1].end());
        for(int j = 1; j < k; ++j){

            // check for same elements, if yes, set chk to true to bypass (1)
            if(x[n-i-1][j] == x[n-i-1][j-1]){
                chk = true;
                break;
            }
        }

        // (1) if chk = false mean no same elements, set ans
        if(!chk){
            ans = n-i;
            break;
        }
    }
    cout << ans;
    
}
