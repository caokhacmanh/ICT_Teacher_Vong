#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("NumInStr2.inp","r",stdin);
    freopen("NumInStr2.out","w",stdout);
    string a;
    int sum = 0, ano = 0, run = 0;
    cin >> a;
    a += 'a';
    for(int i = 0; i < a.length(); ++i){
        if(a[i] - '0' <= 9){
            run = a[i] - '0';
            ano = ano * 10 + run;
        }else{
            sum += ano;
            ano = 0;
        }
    }
    cout << sum;
}