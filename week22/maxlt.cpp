#include <bits/stdc++.h>
#include <fstream>
using namespace std;

ofstream fout;
ifstream fin;
long long mi[500005], a[500005];
long long s = 0, n;

int main(){
    fin.open("maxlt.inp");
    fout.open("maxlt.out");
    fin >> n;
    for(int i = 1; i <= n; ++i){
        fin >> a[i];
    }
    mi[0] = 0;
    for(int i = 1; i <= n; ++i){
        s = s + a[i];
        mi[i] = min(mi[i-1], s);
    }
    long long x, ans = a[1];
    s = a[1];
    for(int j = 2; j <= n; ++j){
        s = s + a[j];
        x = s - mi[j-1];
        ans = max(ans, x);
    }
    fout << ans;
    // cout << ans;
}