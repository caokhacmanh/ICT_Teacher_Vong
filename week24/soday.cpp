#include <bits/stdc++.h>
using namespace std;

int n, k, m, ans = 0, tmp = 0;
int arr[100002];

int binSearcher(int toFind, int binArray[], int n);

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("soday.inp", "r", stdin);
    freopen("soday.out", "w", stdout);
    cin >> n >> m;
    ans = 0;
    for(int i=0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for(int t = 0; t < m; ++t){
        cin >> k;
        if(binSearcher(k, arr, n) > -1) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}

int binSearcher(int toFind, int binArray[], int q){ // return the position in array
    int left, right, mid = -1;
    left = 0;
    right = q - 1;
    while(left <= right){
        mid = (left + right) / 2;
        if(binArray[mid] == toFind){
            return mid;
        }else if(binArray[mid] > toFind){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return -1;
}