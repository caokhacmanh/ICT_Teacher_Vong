#include <bits/stdc++.h>
using namespace std;

// neccesary
int n = 0, k = 0, tmp = 0, ins = 0, run = 0, ans = 0;
bool chk = true;

// optional
int ansrr[100002], nrr[100002], m = 0;
pair<int,int> mrr[100002];

int main(){
    // Initialize the file system
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("flower.inp", "r", stdin);
    freopen("flower.out", "w", stdout);

    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> nrr[i];
    sort(nrr, nrr+n);
    for(int t = 0; t < m; ++t){
        cin >> mrr[t].first;
        mrr[t].second = t;
    }
    sort(mrr, mrr+m);
    for(int t = 0; t < m; ++t){
        chk = false;
        ans = 0;
        for(int i = tmp; i < n; ++i){
            if(nrr[i] >= mrr[t].first){
                tmp = i;
                chk = true;
                break;
            }
        }
        if(chk){
            ansrr[mrr[t].second] = n - tmp;
        }else{
            ansrr[mrr[t].second] = 0;
        }
    }
    for(int i=0; i < m; ++i){
        cout << ansrr[i] << " ";
    }

}