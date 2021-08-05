#include <bits/stdc++.h>
#include "D:\MY_PERSONAL_LIB\main_lib.h"
using namespace std;

int main(){
    // freopen("redblackmin.inp", "r", stdin);
    // freopen("redblackmin.out", "w", stdout);
    int n = 0;
    cin >> n;
    int x[n], c[n], red[n], black[n], numred = 0, numblack = 0;
    int smallest = 1000;
    for(int i = 0; i < n; ++i){
        cin >> x[n];
    }
    for(int i = 0; i < n; ++i){
        cin >> c[n];
    }

    for(int i = 0, a = 0; i < n; ++i){
        if(c[i] == 2){
            red[a] = i;
        }
        ++a;
        numred = a;
    }
    for(int i = 0, a = 0; i < n; ++i){
        if(c[i] == 0){
            black[a] = i;
        }
        ++a;
        numblack = a;
    }
    for(int i = 0; i < numred; ++i){
        for(int ii = 0; ii < numblack; ++ii){
            if(red[i] >= black[ii]){
                if(smallest > x[red[i]] - x[black[ii]])
                    smallest = x[red[i]] - x[black[ii]];
            }else{
                if(smallest > x[black[ii]] - x[red[i]])
                    smallest = x[black[ii]] - x[red[i]];
            }
        }
    }
    cout << smallest;
}