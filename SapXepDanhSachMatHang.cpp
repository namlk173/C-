#include<bits/stdc++.h>
using namespace std;
int n;
struct MatHang{
	int MaHang;
	string TenHang;
	string NhomHang;
	double GiaMua, GiaBan;
};
void Nhap(MatHang M[], int n){
	int index = 1;
	for(int i =0;i<n; i++){
		cin.ignore();
		M[i].MaHang = index++;
		getline(cin,M[i].TenHang);
		getline(cin,M[i].NhomHang);
		cin>>M[i].GiaMua;
		cin>>M[i].GiaBan;
	}
}
void In(MatHang M[], int n){
	for(int i =0; i<n; i++){
		cout<<M[i].MaHang<<" "<<M[i].TenHang<<" "<<M[i].NhomHang<<" "
		<<fixed<<setprecision(2)<<M[i].GiaBan - M[i].GiaMua<<endl;
	}
}
bool SapXep(MatHang x, MatHang y){
	return x.GiaBan - x.GiaMua > y.GiaBan - y.GiaMua;
}
int main(){
	cin>>n;
	struct MatHang Hang[n];
	Nhap(Hang, n);
	sort(Hang,Hang+n,SapXep);
	In(Hang, n);
}
