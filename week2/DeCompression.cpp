#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("DeCompression.inp","r",stdin);
    // freopen("DeCompression.out","w",stdout);
    string a;
    cin >> a;
    while(a.length() > 0){
        int x = 0, run = 0;
        if(a[0] - '0' <= 9){
            run = a[0] - '0';
            x = x * 10 + run;
        }else{
            for(int i = 0; i < x; ++i){
                cout << a[0];
            }
            x = 0;
            run = 0;
        }
        a.erase(0, 1);

    }
}