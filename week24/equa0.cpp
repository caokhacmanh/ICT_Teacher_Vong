#include <bits/stdc++.h>
using namespace std;

int n, k, m, ans = 0, tmp = 0;
int run1 = 0, run2 = 0;
int arr[100002];
int subArr[100002];
int subBrr[100002];

int binSearcher(int toFind, int binArray[], int n);

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("equa0.inp", "r", stdin);
    freopen("equa0.out", "w", stdout);
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> tmp;
        if(tmp < 0){
            subArr[run1] = tmp;
            ++run1;
            // cout << tmp << "s1" << endl;
        }else{
            subBrr[run2] = tmp;
            // cout << tmp << "s2" << endl;
            ++run2;
        }
        
    }
    sort(subArr, subArr + run1);
    sort(subBrr, subBrr + run2);
    for(int i1 = 0; i1 < run1; ++i1){
        for(int i2 = 0; i2 < run2; ++i2){
            if(subArr[i1] + subBrr[i2] == 0){
                ++ans;
            }
        }
    }
    cout << ans;

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