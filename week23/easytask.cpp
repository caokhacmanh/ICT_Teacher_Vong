#include <bits/stdc++.h>
using namespace std;

const int mv = 1e6;
int n, a[mv+1];
bool nt[mv+1];

void eratos(){
    memset(nt, true, sizeof nt);
    nt[0] = nt[1] = false;
    for(int i = 2; i <= sqrt(mv); ++i){
        if(nt[i]){
            int j = i;
            while(i*j <= mv){
                nt[i*j] = false;
                ++j;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("easytask.inp", "r", stdin);
    freopen("easytask.out", "w", stdout);
    eratos();
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    long long ans = a[2], sum = a[1] + a[2], mins = a[1];
    for(int R = 3; R <= n; ++R){
        sum += a[R];
        if(nt[R]){
            mins = min(mins, sum - a[R]);
            ans = max(ans, sum - mins);
        }
    }
    cout << ans;
}