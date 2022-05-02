#include<bits/stdc++.h>
using namespace std;
int i = 0;
struct NhanVien{
	int MaNV;
	string HoTen;
	string GioiTinh;
	string dob;
	string DiaChi;
	string MaSoThue;
	string NgayKi;
};
void nhap(NhanVien &a){
	if(i==0){
		cin.ignore();
	}
	a.MaNV = ++i;
	getline(cin,a.HoTen);
	getline(cin,a.GioiTinh);
	getline(cin,a.dob);
	getline(cin,a.DiaChi);
	getline(cin,a.MaSoThue);
	getline(cin,a.NgayKi);
}
void inds(NhanVien a[], int n){
	for(int i= 0;i<n;i++){
		cout<<right<<setw(5)<<setfill('0')<<a[i].MaNV<<" "<<a[i].HoTen<<" "
		<<a[i].GioiTinh<<" "<<a[i].dob<<" "<<a[i].DiaChi<<" "
		<<a[i].MaSoThue<<" "<<a[i].NgayKi<<endl;
	}
}
bool compare_dob(NhanVien x, NhanVien y){
	string a = x.dob.substr(6, 4);
	string b = y.dob.substr(6,4);
	if(a < b) return 1;
	else if(a==b){
		string a1 = x.dob.substr(0, 2);
		string b1 = y.dob.substr(0, 2);
		if(a1 < b1) return 1;
		else if(a1==b1){
			string a2 = x.dob.substr(3, 2);
			string b2 = y.dob.substr(3, 2);
			if(a2 < b2) return 1;
			}
			else{ 
				return 0;
			}
	}
	return 0;
}
void sapxep(NhanVien a[], int n){
	sort(a, a+n, compare_dob);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
