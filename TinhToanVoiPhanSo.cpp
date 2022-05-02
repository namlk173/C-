#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	int tu,mau;
};
int UCLN(int x, int y){
	while(x!=0){
		int temp =x;
		x =y%x;
		y = temp;
	}
	return y;
}
long long BCNN(long x, long y){
	return x/UCLN(x,y)*y;
}
void in(PhanSo x){
		cout<<x.tu<<"/"<<x.mau;
}
PhanSo rutgon(PhanSo a){
	int x = UCLN(a.tu,a.mau);
	a.tu = a.tu/x;
	a.mau = a.mau/x;
	return a;
}
PhanSo cong(PhanSo a, PhanSo b){
	PhanSo p;
	long long  bcnn = BCNN(a.mau,b.mau);
	int x = bcnn/a.mau;
	int y = bcnn/b.mau;
	p.tu = x*a.tu + y*b.tu;
	p.mau =bcnn;
	return rutgon(p);
}
PhanSo nhan(PhanSo a, PhanSo b){
	PhanSo p;
	a = rutgon(a);
	b = rutgon(b);
	p.tu = a.tu*b.tu;
	p.mau = a.mau*b.mau;
	return 	rutgon(p);
}
void process(PhanSo a, PhanSo b){
	a = rutgon(a);
	b = rutgon(b);
	PhanSo c = cong(a,b);
	c = rutgon(c);
	c = rutgon(nhan(c,c));
	in(c);
	cout<<" ";
	PhanSo d = rutgon(nhan(a,b));
	d = rutgon(nhan(d,c));
	in(d);
	cout<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
