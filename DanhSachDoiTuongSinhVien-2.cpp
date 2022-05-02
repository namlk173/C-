#include<bits/stdc++.h>
using namespace std;	
int z = 0;
class SinhVien{
	string MaSV;
	string HoTen;
	string ngaySinh;
	string lop;
	float GPA;
	int index;
	public:
		SinhVien(){
			++index;
			MaSV = "B20DCCN";
			HoTen = "";
			lop= "";
			GPA =0;
		}
	friend  istream &operator >>(istream &input, SinhVien &s){
		input.ignore();
		s.index = ++z;
		getline(input,s.HoTen);
		getline(input,s.lop);	
		getline(input,s.ngaySinh);
		input>>s.GPA;
		return input;
	}
	friend ostream &operator <<(ostream &output, SinhVien &s){
		string  name = s.HoTen;
		istringstream iss(name);
		string word;
		string temp ="";
		while(iss>>word){
		for(int i =1; i<word.length();i++){
			word[i] = tolower(word[i]);
			}
			word[0] = toupper(word[0]);
			temp = temp + word + " ";	
		}
		s.HoTen = temp;
		if(s.ngaySinh.length()<10){
		string NgaySinh = s.ngaySinh;
		string day="", month="", year="";
		int index = -1;
		for(int i =0; i<NgaySinh.length();i++){
			if(NgaySinh[i]=='/'){
				index = i;
				for(int j =0; j< i; j++){
					day= day + NgaySinh[j];
				}
				break;
			}
		}
		for(int i = index+1; i<NgaySinh.length();i++){
			if(NgaySinh[i]=='/'){
				for(int j = index + 1; j<i; j++){
					month = month + NgaySinh[j];
				}
				index = i;
				break;
			}
		}
		for(int i = index +1; i<NgaySinh.length();i++){
			year = year + NgaySinh[i];
		}
		if(day.length()<2){
			for(int i =0; i<2-day.length();i++){
				day = "0" + day;
			}
		}
		if(month.length()<2){
			for(int i =0; i<2-month.length();i++){
				month = "0" + month;
			}
		}
		if(year.length()<4){
			for(int i =0; i<4-year.length();i++){
				year = "0" + year;
			}
		}
		s.ngaySinh = day + "/" + month + "/" + year;
		}
		output<<s.MaSV<<right<<setw(3)<<setfill('0')<<s.index<<" "<<s.HoTen<<""
		<<s.lop<<" "<<s.ngaySinh<<" "<<fixed<<setprecision(2)<<s.GPA<<endl;
		return output;
	}
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
