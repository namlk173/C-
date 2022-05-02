#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long x, long long y){
	while(x!=0){
		long long temp = x;
		x = y%x;
		y=temp;  
	}
	return y;
}
struct PhanSo{
 	long long tu_so,mau_so;
};
void nhap(PhanSo &p){
	cin>>p.tu_so;
	cin>>p.mau_so;
}
void rutgon(PhanSo &p){
	long long ucln = UCLN(p.tu_so,p.mau_so);
	p.tu_so = p.tu_so/ucln;
	p.mau_so = p.mau_so/ucln;
}
void in(PhanSo &p){
	cout<<p.tu_so<<"/"<<p.mau_so;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
