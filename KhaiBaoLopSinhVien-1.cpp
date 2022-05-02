#include<bits/stdc++.h>
using namespace std;
#define a() a
class SinhVien{
	string ma;
	string ten;
	string lop;
	string ngaysinh;
	float GPA;
	public:
		SinhVien(){
			ma = "B20DCCN001";
			ten ="";
			lop ="";
			ngaysinh ="";
			GPA = 0;
		}
		SinhVien(string t, string l, string n, float g){
			ma = "B20DCCN001";
			ten = t;
			lop = l;
			ngaysinh = n;
			GPA =g;
		}
		void nhap(){
			getline(cin,ten);
			getline(cin,lop);
			getline(cin,ngaysinh);
			cin>>GPA;
			
			int n = ngaysinh.length();
			string day = "", month = "", year = "";
			int index = -1;
			for(int i =0; i<n; i++){
				if(ngaysinh[i]=='/'){
					for(int j =0; j<i; j++){
						day = day + ngaysinh[j];
					}
					index = i;
					break;
				}
			}
			for(int i = index + 1; i<n; i++){
				if(ngaysinh[i]=='/'){
					for(int j = index+1; j<i; j++){
						month = month + ngaysinh[j];
					}
					index = i;
					break;
				}
			}
			for(int i = index +1; i<n; i++){
				year = year + ngaysinh[i];
			}	
			if(day.length()<2){
				for(int i =0; i<2-day.length(); i++){
					day = "0" + day;
				}
			}
			if(month.length()<2){
				for(int i =0; i<2-month.length(); i++){
					month = "0" + month;
				}
			}
			
			if(year.length()<4){
				for(int i =0; i<4-year.length(); i++){
					year = "0" + year;
				}
			}
			ngaysinh = day + '/' + month + '/' +year;
		}
		void xuat(){
			cout<<ma<<" "<<ten<<" "<<lop<<" "<<ngaysinh<<" "
			<<fixed<<setprecision(2)<<GPA<<endl;
		}
		
};	


int main(){
    SinhVien a();
    a.nhap();
    a.xuat();
    return 0;
}
