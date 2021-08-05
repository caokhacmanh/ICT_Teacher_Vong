#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("Ispalindrome.inp","r",stdin);
    freopen("Ispalindrome.out","w",stdout);
    string x, xx, y, yy;
    cin >> x >> y;
    xx = x;
    yy = y;
    reverse(xx.begin(), xx.end());
    reverse(yy.begin(), yy.end());
    if(x == xx){
        cout << "yes\n";
    }else{
        cout << "no\n";
    }
    if(y == yy){
        cout << "yes\n";
    }else{
        cout << "no\n";
    }
}