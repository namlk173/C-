#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long x, long long y){
	long long i = x, j= y;
	while(i!=0){
	long long temp =i;
	i= j%i;
	j =temp;
	}
	return j;
}
class PhanSo{
	private:
		long long tu_So;
	 	long long mau_So;
	public:
		PhanSo(){
			tu_So = 1;
			mau_So =1;
		}
		PhanSo(long long tu, long mau){
			tu_So = tu;
			mau_So = mau;
		}
	friend ostream &operator<<(ostream &output, const PhanSo &P){
		output<<P.tu_So<<"/"<<P.mau_So;
		return output;
	}
	friend istream &operator>>(istream &input, PhanSo &P){
		input>>P.tu_So >> P.mau_So;
		return input;
	}
	public:
		void rutgon(){
			long long x = UCLN(tu_So, mau_So);
			tu_So = tu_So/x;
			mau_So = mau_So/x;
		}
	
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
