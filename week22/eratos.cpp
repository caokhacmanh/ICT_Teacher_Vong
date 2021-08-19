#include <bits/stdc++.h>
#include <fstream>
using namespace std;

ofstream fout;
ifstream fin;
int run = 0, n;

bool chk(int n);

int main(){
    fin.open("eratos.inp");
    fout.open("eratos.out");
    fin >> n;
    for(int i = 2; i <= n; ++i){
        if(chk(i)){
            fout << i << " ";
        }
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