#include <bits/stdc++.h>
using namespace std;

int n, k, x, ans = 0, tmp = 0;
int arr[100002];
int brr[100002];

int binSearcher(int toFind, int binArray[], int n);

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("chiso.inp", "r", stdin);
    freopen("chiso.out", "w", stdout);
    cin >> n >> k;
    ans = 0;
    int sum = 0;
    for(int i=0; i < n; ++i){
        cin >> arr[i];
        sum += arr[i];
        brr[i] = sum;
    }
    sort(arr, arr + n);
    for(int t = 0; t < k; ++t){
        cin >> x;
        tmp = binSearcher(x, brr, n);
        if(tmp > -1) cout << tmp + 1 << "\n";
        else cout << -1 << "\n";
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