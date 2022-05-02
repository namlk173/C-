#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string MaSv;
	string HoTen;
	string lop;
	string NgaySinh;
	float GPA;
}; 
void nhap(SinhVien s[], int n){
	for(int i =0; i<n; i++){
		if(i==0){
			cin.ignore();
		}
		s[i].MaSv = "B20DCCN";
		getline(cin,s[i].HoTen);
		getline(cin,s[i].lop);
		getline(cin,s[i].NgaySinh);
		cin>>s[i].GPA;
		cin.ignore();
	}
	for(int i =0; i<n; i++){
		string ngaySinh = s[i].NgaySinh;
		if(ngaySinh.length()<10){
			string day = "";
			string month = "";
			string year = "";
			int index =-1;
			for(int m =0; m<ngaySinh.length(); m++){
				if(ngaySinh[m]=='/'){
					for(int j =0; j<m; j++){
						day = day + ngaySinh[j];
					}
					index = m;
					break;
				}
			}
			for(int m = index +1; m<ngaySinh.length(); m++){
				if(ngaySinh[m]=='/'){
					for(int j = index + 1; j<m; j++){
						month = month + ngaySinh[j];
					}	
					index = m;
					break;
				}
				
			}
			for(int k = index +1; k<ngaySinh.length(); k++){
				year = year + ngaySinh[k];
			}
			if(day.length()<2){
				for(int i =0; i<2-day.length();i++){
					day = '0'+day;
				}
			}
			if(month.length()<2){
				for(int i =0; i<2-month.length();i++){
					month = '0'+ month;
				}
			}
			if(year.length()<4){
				for(int i =0; i<4-year.length();i++){
					month = '0'+ year;
				}
			}
			s[i].NgaySinh = day + '/'+ month+'/'+year;
		}
	}
	for(int i =0; i<n; i++){
		string  name = s[i].HoTen;
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
		s[i].HoTen = temp;		
	}

}
void in(SinhVien s[], int n){
	int index = 1;
	for(int i =0; i<n; i++){
		cout<<s[i].MaSv<<right<<setw(3)<<setfill('0')<<index++<<" "<<s[i].HoTen<<" "
		<<s[i].lop<<" "<<s[i].NgaySinh<<" "<<fixed<<setprecision(2)<<s[i].GPA<<endl;
	}
	
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
