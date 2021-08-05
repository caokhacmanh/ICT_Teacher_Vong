#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

bool check(int n, int tot){
    int run = 0;
    for(int i = 2; i <= sqrt(n); ++i){
        if(n%i==0 && i!=n){
            run += 2;
        }
    }
    return (n == tot);
}

int arr[202];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("minx.inp", "r", stdin);
    freopen("minx.out", "w", stdout);
    int n;
    cin >> n;
    int tmp = 1;
    for(int i = 0 ; i < n; ++i){
        cin >> arr[i];
        tmp = (tmp*arr[i]) / gcd(tmp, arr[i]);
    }
    int run = tmp;
    while(check(run, n) == false){
        run += tmp;
    }
    cout << run;
}