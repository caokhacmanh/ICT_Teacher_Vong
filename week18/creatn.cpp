#include<bits/stdc++.h>
using namespace std;
long long a[3005],b[1005],c[1005],f[1005],kq[10005];
int main () {
	freopen("creatn.inp","r",stdin);
	freopen("creatn.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n;
	cin>>n;
	for(int i=1;i<=3*n;i++) {
		cin>>a[i];
	}
	long long d=1;
	sort(a+1,a+3*n+1);
	for(int i=1;i<=3*n;i+=3) {
		b[d]=a[i];
		d++;
	}
	d=1;
	for(int i=2;i<=3*n;i+=3) {
		c[d]=a[i];
		d++;
	}
	d=1;
	for(int i=3;i<=3*n;i+=3) {
		f[d]=a[i];
		d++;
	}
	for(int i=n;i>1;i--) {
		kq[i]=kq[i]+b[i]+c[i]+f[i];
		if(kq[i]>=10) {
			kq[i-1]=kq[i-1]+kq[i]/10;
			kq[i]=kq[i]%10;
		}
	}
	kq[1]=kq[1]+b[1]+c[1]+f[1];
	for(int i=1;i<=n;i++)
	cout<<kq[i];
}