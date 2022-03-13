#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("Smaller.inp","r",stdin);
    freopen("Smaller.out","w",stdout);
    int n = 0, q = 0, ano = 0;
    cin >> n;
    int narr[n];
    for(int i = 0; i < n; ++i){
        cin >> narr[i];
    }
    cin >> q;
    int qarr[q];
    for(int i = 0; i < q; ++i){
        cin >> qarr[i];
        --qarr[i];
    }

    for(int i = 0; i < q; ++i){
        ano = 0;
        for(int ii = 0; ii < n; ++ii){
            if(narr[ii] < narr[qarr[i]]){
                ++ano;
            }
        }
        cout << ano << "\n";
    }
}