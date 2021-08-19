#include <bits/stdc++.h>
#include <fstream>
using namespace std;

ofstream fout;
ifstream fin;
int run = 0, q, a, b;
int arr[1000002];

bool chk(int n);

int main(){
    fin.open("staticspri.inp");
    fout.open("staticspri.out");
    arr[1] = 0;
    arr[0] = 0;
    for(int i = 2; i <= 1000002; ++i){
        if(chk(i)){
            ++run;
        }
        arr[i] = run;
        // cout << i << " : " << arr[i] << "\n";
    }
    fin >> q;
    for(int t = 0; t < q; ++t){
        fin >> a >> b;
        fout << arr[b] - arr[a - 1]<< "\n";
    }
}

bool chk(int n) {
    for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}