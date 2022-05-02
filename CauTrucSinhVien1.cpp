#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string maSV;
	string hoTen;
	string lop;
	string dob;
	float GPA;
};
void nhapThongTinSV(SinhVien &x){
	x.maSV = "N20DCCN001";
	getline(cin,x.hoTen);
	getline(cin,x.lop);
	getline(cin,x.dob);
	cin>>x.GPA;
}
void inThongTinSV(SinhVien x){
	
	cout<<x.maSV<<" "<<x.hoTen<<" "<<x.lop<<" "<<x.dob<<" "
	<<fixed<<setprecision(2)<<x.GPA<<endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
