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
	friend istream &operator>>(istream &input, SinhVien &s){
		getline(input,s.ten);
		getline(input,s.lop);
		getline(input,s.ngaysinh);
		cin>>s.GPA;
		
		int n = s.ngaysinh.length();
		string day = "", month = "", year = "";
		int index = -1;
		for(int i =0; i<n; i++){
		if(s.ngaysinh[i]=='/'){
			for(int j =0; j<i; j++){
				day = day + s.ngaysinh[j];
			}
			index = i;
			break;
		}
		}
		for(int i = index + 1; i<n; i++){
		if(s.ngaysinh[i]=='/'){
			for(int j = index+1; j<i; j++){
				month = month + s.ngaysinh[j];
			}
			index = i;
			break;
			}
		}
		for(int i = index +1; i<n; i++){
		year = year + s.ngaysinh[i];
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
		s.ngaysinh = day + '/' + month + '/' +year;
		
		return input;
	}
	friend ostream &operator<<(ostream &output, SinhVien &s){
		output<<s.ma<<" "<<s.ten<<" "<<s.lop<<" "<<s.ngaysinh<<" "<<fixed<<setprecision(2)<<s.GPA<<endl;
		return output;
	}
};
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
