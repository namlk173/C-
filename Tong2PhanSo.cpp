#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long x,long long y){
	while(x!=0){
		long long temp = x;
		x =y%x;
		y=temp;
	}
	return y;
}
long long BCNN(long long x, long long y){
	return x/UCLN(x,y)*y;
}
struct PhanSo{
	long long tu_so,mau_so;	
};
void nhap(PhanSo &p){
	cin>>p.tu_so>>p.mau_so;
}
PhanSo tong(PhanSo p, PhanSo q){
	long long bcnn = BCNN(p.mau_so, q.mau_so);
	long long x= bcnn/p.mau_so*p.tu_so;
	long long y= bcnn/q.mau_so*q.tu_so;
	PhanSo t;
	t.tu_so = x + y;
	t.mau_so = bcnn;
	long long thua_so = UCLN(t.tu_so,t.mau_so);
	t.tu_so = t.tu_so/thua_so;
	t.mau_so = t.mau_so/thua_so;
	return t;
}
void in(PhanSo t){
	cout<<t.tu_so<<"/"<<t.mau_so;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
