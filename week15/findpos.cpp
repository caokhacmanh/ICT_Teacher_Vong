#include <bits/stdc++.h>
using namespace std;

int n;
pair<int,int> arr[200000];
int brr[200000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    freopen("findpos.inp", "r", stdin);
    freopen("findpos.out", "w", stdout);
    cin >> n;
    int tmp;
    for(int i = 0;i < n; ++i){
        cin >> tmp;
        arr[tmp].second = i;
    }
    for(int i = 0;i < n; ++i){
        cin >> brr[i];
    }
    
    
    for(int i = 0; i < n; ++i){
        cout << arr[brr[i]].second + 1 << " ";
    }
}