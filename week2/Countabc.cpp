#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("Countabc.inp","r",stdin);
    freopen("Countabc.out","w",stdout);
    int a = 0, b = 0, c = 0;
    string st;
    cin >> st;
    for(int i = 0; i < st.length(); ++i){
        if(st[i] == 'a'){
            ++a;
        }else if(st[i] == 'b'){
            ++b;
        }else{
            ++c;
        }
    }
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
}