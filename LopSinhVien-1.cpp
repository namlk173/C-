#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string MaSv;
		string hoten;
		string lop;
		string ngaySinh;
		float GPA;
	public:
		SinhVien(){
			MaSv = "B20DCCN001";
			hoten = "";
			ngaySinh = "";
			GPA = 0;
		}
	public:
		string getMaSV(){
			return MaSv;
		}
		string getName(){
			return hoten;
		}	
		string getLop(){
			return lop;
		}
		string getNgaySinh(){
			return ngaySinh;
		}
		float getGpa(){
			return GPA;
		}
};
void nhap(SinhVien S){
	string hoten;
	string ngay;
	string lop;
	float gpa;
	getline(cin,hoten);
	getline(cin,lop);
	getline(cin,ngay);
	cin>>gpa;
}
void in(SinhVien S){
	cout<<S.getMaSV()<<" "<<S.getName()<<" "<<S.getLop()<<" "<<S.getNgaySinh()<<" "
	<<fixed<<setprecision(2)<<S.getGpa();
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
