#include <bits/stdc++.h>
using namespace std;

int n, q, x = 0, y = 0, n1 = 0, n2 = 0, n3 = 0;
int arr[200002], s1[200002], s2[200002], s3[200002], sum = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tk123.inp", "r", stdin);
    freopen("tk123.out", "w", stdout);
    cin >> n >> q;
    s1[0] = s2[0] = s3[0] = 0;
    for(int i = 1; i <= n; ++i){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; ++i){
        s1[i] = s1[i-1] + (arr[i] == 1);
        s2[i] = s2[i-1] + (arr[i] == 2);
        s3[i] = s3[i-1] + (arr[i] == 3);
    }
    for(int m = 0; m < q; ++m){
        cin >> x >> y;
        cout << s1[y] - s1[x - 1] << " " << s2[y] - s2[x - 1] << " " << s3[y] - s3[x - 1] << "\n";   
    }

}