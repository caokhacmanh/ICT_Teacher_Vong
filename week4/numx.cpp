#include <bits/stdc++.h>
using namespace std;



long long int max(long long int c[], long long int g)
{
    long long int max = c[0];
    for (long long int i = 1; i < g; i++)
        if (max < c[i])
            max = c[i];
    return max;
}

long long int min(long long int c[], long long int g)
{
    long long int min = c[0];
    for (long long int i = 1; i < g; i++)
        if (min > c[i])
            min = c[i];
    return min;
}
int main(){
    freopen("numx.inp", "r", stdin);
    freopen("numx.out", "w", stdout);
    long long int n = 0, x = 0, numof = 0, ano1 = 0, ano2 = 0;
    cin >> n;
    long long int a[n], b[n];
    for(long long int m = 0; m < n; ++m){
        cin >> a[m];
    }
    for(long long int m = 0; m < n; ++m){
        cin >> b[m];
    }
    ano1 = max(a, n);
    ano2 = min(b, n);
    cout << ano2 - ano1 + 1;
}