#include<bits/stdc++.h>
using namespace std;
int UCLN(int x, int y){
	while(x!=0){
	int temp = x;
	x=y%x;
	y =temp;
	}
	return y;
}
long long BCNL(int x, int y){
	return x/UCLN(x,y)*y;
}
class PhanSo{
	private:
		int tu_so;
		int mau_so;
	public:
		PhanSo(){
		tu_so =1;
		mau_so =1;
		}
		PhanSo(int tu, int mau){
		tu_so = tu;
		mau_so = mau;
		}
	public:
		PhanSo operator + (const PhanSo&P){
			 PhanSo Ps;
			 long long lcm = BCNL(mau_so, P.mau_so);
			 long long x = lcm/this->mau_so;
			 long long y = lcm/P.mau_so;
			 Ps.tu_so = this->tu_so*x + P.tu_so*y;
			 Ps.mau_so = lcm;
			 long long  gcd = UCLN(Ps.tu_so, Ps.mau_so);
			 Ps.tu_so = Ps.tu_so/gcd;
			 Ps.mau_so =Ps.mau_so/gcd;
			 return Ps;
		}
	friend istream &operator >>(istream &input, PhanSo &P){
		input>>P.tu_so>>P.mau_so;
		return input; 
	}
	friend ostream &operator <<(ostream &output, const PhanSo &P){
		output<<P.tu_so<<"/"<<P.mau_so;
		return output;
	}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
