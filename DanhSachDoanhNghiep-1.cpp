#include<bits/stdc++.h>
using namespace std;
int n;
class DoanhNghiep{
	string ma;
	string ten;
	int soluong;
	public:
		DoanhNghiep(){
			ma ="";
			ten="";
			soluong =0;
		}
	int getsoluong(){
		return soluong;	
	}
	string getma(){
		return ma;
	}
	friend istream &operator>>(istream &input, DoanhNghiep &d){
		getline(input, d.ma);
		getline(input, d.ten);
		input>>d.soluong;
		input.ignore();
		return input;
	}
	friend ostream &operator <<(ostream &output, DoanhNghiep &d){
		output<<d.ma<<" "<<d.ten<<" "<<d.soluong<<endl;
		return output; 
	}
};
bool compare(DoanhNghiep dn1, DoanhNghiep dn2){
	int sl1 = dn1.getsoluong();
	int sl2 = dn2.getsoluong();
	string madn1 = dn1.getma();
	string madn2 = dn2.getma();
	if(sl1>sl2){
		return 1;
	}
	else if(sl1==sl2){
		if(madn1 < madn2){
			return 1;
		}
	}
	return 0;
}
int main(){
	cin>>n;
	cin.ignore();
	DoanhNghiep dn[n];
	for(int i=0; i<n;i++) cin>>dn[i];
	sort(dn,dn+n,compare);
	for(int i =0;i<n; i++) cout<<dn[i];
	return 0;
}

