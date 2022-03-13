#include <bits/stdc++.h>
using namespace std;

long long a = 0, b = 0, tmp = 1000, run = 0, n;
bool chk = true;

string inp;
int arr[2001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("moverect.inp", "r", stdin);
    freopen("moverect.out", "w", stdout);
    cin >> n >> inp;
    for(int i = 0; i < 2001; ++i){
        arr[i] = 0;
    }
    arr[tmp] = 1;
    for(int i = 0; i < n; ++i){
        if(inp[i] == 'R') ++tmp;
        else --tmp;
        ++arr[tmp];
    }
    tmp = -1000000;
    for(int i = 0; i < 2001; ++i){
        if(tmp < arr[i]) tmp = arr[i];
    }
    cout << tmp;
    

}