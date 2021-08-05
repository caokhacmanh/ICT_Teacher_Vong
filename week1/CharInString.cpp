#include <bits/stdc++.h>
#include <string.h>
#include <conio.h>
using namespace std;
int length = 0, check = 0;

void get_length(string a){
    for(int i = 0; a[i] != '\0' ; ++i){
        ++length;
    }
}

int main(){
    string x, y;
    freopen("CharInString.Inp","r", stdin);
    freopen("CharInString.Out","w", stdout);
    cin >> x;
    cin >> y;
    get_length(x);
    for(int i = 0; i < length; ++i){
        if('a' == x[i]){
            cout << "yes\n";
            check = 1;
            break;
        }
    }
    if(check == 0){
        cout << "no\n";
    }
    check = 0;
    get_length(y);
    for(int i = 0; i < length; ++i){
        if('a' == y[i]){
            cout << "yes\n";
            check = 1;
            break;
        }
    }
    if(check == 0){
        cout << "no";
    }
}
