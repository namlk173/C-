#include<bits/stdc++.h>
using namespace std;
#define a() a
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
	friend istream &operator>>(istream &input, NhanVien &n){
		getline(input,n.ten);
		getline(input,n.gioitinh);
		getline(input,n.ngaysinh);
		getline(input,n.diachi);
		getline(input,n.masothue);
		getline(input,n.ngaykihd);
		return input;
	}
	friend ostream &operator<<(ostream &output, NhanVien &n){
		output<<n.ma<<" "<<n.ten<<" "<<n.gioitinh<<" "<<n.ngaysinh<<" "
		<<n.diachi<<" "<<n.masothue<<" "<<n.ngaykihd<<endl;
		return output;
	}
};
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
