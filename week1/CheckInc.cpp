#include <bits/stdc++.h>
using namespace std;

int lar;

void large(int a, int b){
    if(a > b){
        lar = b;
    }else{
        lar = a;
    }
}

int main(){
    freopen("CheckInc.inp","r", stdin);
    freopen("CheckInc.out","w", stdout);
    int a, b, x, y, n, ano, num, last;
    cin >> n;
    for(int run = 0; run < n; ++run){
        cin >> x >> y >> a >> b;
        large(a, b);
        ano = y - x;
        num = ano / lar;
        last = ano - num * lar;
        if(ano == num * lar){
            cout << num << "\n";
            break;
        }
        for(int i = 0; i < num; ++i){
            if((ano - num * lar) % x == 0){
                if(ano == num * lar){
                    cout << num << "\n";
                    break;
                }else{
                    cout << num + last / x << "\n";
                }
            }else if((ano - num * lar) % y == 0){
                if(ano == num * lar){
                    cout << num << "\n";
                    break;
                }else{
                    cout << num + last / y << "\n";
                }
            }else{
                cout << "no\n";
            }
        }


    }
}