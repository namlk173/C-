#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string MaNv = "00001";
	string hoTen;
	string gioiTinh;
	string ngaySinh;
	string diaChi;
	char MsThue[10];
	string Ngay_Ky_Hop_Dong;
};
void nhap(NhanVien &a){
	getline(cin,a.hoTen);
	getline(cin,a.gioiTinh);
	getline(cin,a.ngaySinh);
	getline(cin,a.diaChi);
	cin>>a.MsThue;
	cin.ignore();
	getline(cin,a.Ngay_Ky_Hop_Dong);
}
void in(NhanVien a){
	cout<<a.MaNv<<" "<<a.hoTen<<" "<<a.gioiTinh<<" "<<a.ngaySinh<<" "<<a.diaChi<<" "<<a.MsThue<<" "<<a.Ngay_Ky_Hop_Dong;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
