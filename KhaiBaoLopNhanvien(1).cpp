#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	string ma;
	string ten;
	string gioitinh;
	string ngaysinh;
	string diachi;
	string masothue;
	string ngaykihd;
	public:
		NhanVien(){
			ma = "00001";
			ten ="";
			gioitinh ="";
			ngaysinh="";
			diachi="";
			masothue="";
			ngaykihd="";
		}
	void nhap(){
		getline(cin,ten);
		getline(cin,gioitinh);
		getline(cin,ngaysinh);
		getline(cin,diachi);
		getline(cin,masothue);
		getline(cin,ngaykihd);
	}
	void xuat(){
		cout<<ma<<" "<<ten<<" "<<gioitinh<<" "<<ngaysinh<<" "
		<<diachi<<" "<<masothue<<" "<<ngaykihd<<endl;
	}
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
