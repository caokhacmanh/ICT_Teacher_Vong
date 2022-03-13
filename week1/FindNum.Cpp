#include<bits/stdc++.h>
using namespace std;

int main(){
    int check = 0, a, b, c, d;
    freopen("FindNum.Inp","r", stdin);
    freopen("FindNum.Out","w", stdout);
    cin >> a >> b;
    cin >> c >> d;
    for(int x = a; x <= b; ++x)
    {
            if(c <= 2*x and 2*x<= d)
            {
                cout << x << endl;
                check = 1;
            }
    }
    if(check == 0)
        cout << "No solution";
}
