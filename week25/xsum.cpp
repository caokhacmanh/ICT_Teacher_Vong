#include <bits/stdc++.h>
using namespace std;

int n, k, m, x, ans = 0, tmp = 0;
int arr[100002];

int binSearcher(int toFind, int binArray[], int n);

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("xsum.inp", "r", stdin);
    freopen("xsum.out", "w", stdout);
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    for(int t = 0; t < m; ++t){
        cin >> x;
        for(int i = 0; i < n; ++i){
            if(binSearcher(x - arr[i], arr, n) > -1){
                cout << 1 << "\n";
                goto done;
            }
        }
        cout << 0 << "\n";
        done:
        tmp = tmp;
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