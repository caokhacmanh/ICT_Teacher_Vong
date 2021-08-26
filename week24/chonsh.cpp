#include <bits/stdc++.h>
using namespace std;

int n, a[500001];
long long s[500005], sum;


int binSearcher(int toFind, int binArray[], int n);

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("chonsh.inp", "r", stdin);
    freopen("chonsh.out", "w", stdout);
    cin >> n;
    s[0] = 0;
    for(int i=1; i<=n; ++i){
        cin >> a[i];
    }   
    cin >> sum;
    for(int i = 1; i <= n; ++i){
        s[i] = s[i-1] + a[i];
    }
    int ans = 0;
    for(int i = 1; i <= n; ++i){

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