#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
bool chk = false;
string s;

// optional parameters
int arr[2002];

// function
void loopThrough(int looper);
void isTrue();

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sbr.inp", "r", stdin);
    freopen("sbr.out", "r", stdout);
    cin >> n;
    loopThrough(0);
    
}

void isTrue(){
    for(int i=0; i<n; i++){
        cout << arr[i];
    }
    cout << "\n";
}

void loopThrough(int looper){
    for(int i = 0; i <= 1; ++i){
        arr[looper] = i;
        if(looper == n - 1){
            isTrue();
        }else{
            loopThrough(looper + 1);
        }
    }
}