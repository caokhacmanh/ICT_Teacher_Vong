#include <bits/stdc++.h>
using namespace std;

long long n, k, ans = 0, tmp = 0;
long long arr[100002];

long long binSearcher(long long toFind, long long binArray[], long long n);

// int main(){
//     ios::sync_with_stdio(0);
//     cout.tie(0);
//     cin.tie(0);
//     freopen("sum2k.inp", "r", stdin);
//     freopen("sum2k.out", "w", stdout);
//     cin >> n >> k;
//     k = k * 2;
//     ans = 0;
//     for(long long i=0; i < n; ++i){
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     tmp = binSearcher(k, arr, n);
//     while(tmp > -1){
//         ++ans;
//         arr[tmp] = k / 2;
//         tmp = binSearcher(k, arr, n);
//     }
//     cout << ans * k;

// }
int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("sum2k.inp", "r", stdin);
    freopen("sum2k.out", "w", stdout);
    cin >> n >> k;
    k = k * 2;
    ans = 0;
    for(long long i=0; i < n; ++i){
        cin >> arr[i];
        if(arr[i] == k) ++ans;
    }
    cout << ans * k;
    

}

long long binSearcher(long long toFind, long long binArray[], long long q){ // return the position in array
    long long left, right, mid = 0;
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