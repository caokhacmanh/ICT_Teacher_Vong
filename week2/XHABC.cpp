#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("XHABC.inp","r",stdin);
    freopen("XHABC.out","w",stdout);
    int a = 0, b = 0, c = 0, ano;
    string st, hello;
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
    if(a > b){
        ano = a;
        hello = 'a';
    }else if(b > c){
        ano = b;
        hello = 'b';
    }else{
        ano = c;
        hello = 'c';
    }
    cout << ano << " " << hello;
}