#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
bool chk = true;

// optional
int arr[1002];

int bonuoc(int x){
    int s = 2, j;
    for(int i = 2; i <= sqrt(x); i++){
        if(x%i==0){
            ++s;
            j=x/i;
            if(j>i) ++s;
        }
    }
    if(s==4) return 1;
    else return 0;
}

int main(){
    // Initialize the file system
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tuuoc.inp", "r", stdin);
    freopen("tuuoc.out", "w", stdout);

    cin >> n;
    for(int t = 0; t < n; ++t){
        cin >> tmp;
        ans += bonuoc(tmp);
    }
    cout << ans;
}