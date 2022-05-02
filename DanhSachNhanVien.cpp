#include<bits/stdc++.h>
using namespace std;
int i =0;
struct NhanVien{
	int	 MaNv = 1;
	string hoTen;
	string gioiTinh;
	string ngaySinh;
	string diaChi;
	char MsThue[10];
	string Ngay_Ky_Hop_Dong;
};
void nhap(NhanVien &a){
	if(i==0){
	cin.ignore();
	getline(cin,a.hoTen);
	getline(cin,a.gioiTinh);
	getline(cin,a.ngaySinh);
	getline(cin,a.diaChi);
	cin>>a.MsThue;
	cin.ignore();
	getline(cin,a.Ngay_Ky_Hop_Dong);
	i++;
	}
	else{
	getline(cin,a.hoTen);
	getline(cin,a.gioiTinh);
	getline(cin,a.ngaySinh);
	getline(cin,a.diaChi);
	cin>>a.MsThue;
	cin.ignore();
	getline(cin,a.Ngay_Ky_Hop_Dong);
	i++;
	}
}
void inds(NhanVien a[], int N){
	for(int i =0; i<N; i++)
	{
		
		cout<<right << setw(5) << setfill('0')<<i+1<<" "<<a[i].hoTen<<" "<<a[i].gioiTinh<<" "<<a[i].ngaySinh<<" "<<a[i].diaChi<<" "<<a[i].MsThue<<" "<<a[i].Ngay_Ky_Hop_Dong<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
