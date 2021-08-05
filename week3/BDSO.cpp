#include <bits/stdc++.h>
using namespace std;

int n = 0, k = 0,k2 = 0, var = 0, length = 0;

int getfx(int a);
int getgx(int a);
int getex(int a);
int getlen(int a);

int main(){
    // freopen("BDSO.inp","r",stdin);
    // freopen("BDSO.out","w",stdout);
    cin >> n >> k;
    k2 = k;
    for(int i = 0; i < n; ++i){
        var = getex(k2);
        k2 = var;
    }
    cout << k2;
}

int getlen(int iii){
    int b = iii, i = 0;
    while(b != 0){
        ++i;
        b /= 10;
    }
    return i;
}

int getgx(int a){
    int arr1[getlen(a)];
    int ano1 = a, ret1 = 0;
    for(int i = 0; i < getlen(a); ++i){
        arr1[i] = ano1 % 10;
        ano1 /= 10;
    }
    sort(arr1, arr1 + getlen(a));
    for(int i = 0; i < getlen(a); ++i){
        ret1 = ret1 * 10 + arr1[i];
    }
    return ret1;
}

int getfx(int a){
    int arr1[getlen(a)];
    int ano1 = a, ret1 = 0;
    for(int i = 0; i < getlen(a); ++i){
        arr1[i] = ano1 % 10;
        ano1 /= 10;
    }
    sort(arr1, arr1 + getlen(a));
    reverse(arr1, arr1 + getlen(a));
    for(int i = 0; i < getlen(a); ++i){
        ret1 = ret1 * 10 + arr1[i];
    }
    return ret1;
}

int getex(int ll){
    return getfx(ll) - getgx(ll);
}