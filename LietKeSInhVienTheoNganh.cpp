#include<bits/stdc++.h>
using namespace std;
int n;
int q;
class SinhVien{
	string masv;
	string hoten;
	string lop;
	string email;
public:
	SinhVien(){
	masv="";
	hoten="";
	lop="";
	email="";	
	}
	string getlop(){
		return lop;
	}
	string getmasv(){
		return masv;
	}
friend istream &operator >>(istream &input, SinhVien &sv){
	getline(input,sv.masv);
	getline(input,sv.hoten);
	getline(input,sv.lop);
	getline(input,sv.email);
	return input;
}
friend ostream &operator <<(ostream &output, SinhVien &sv){
	output<<sv.masv<<" "<<sv.hoten<<" "<<sv.lop<<" "<<sv.email<<endl;
	return output;
}
};
int main(){
	cin>>n;
	SinhVien sv[n];
	cin.ignore();
	for(int i =0; i<n; i++) cin>>sv[i];
	cin>>q;
	cin.ignore();
	string querry;
	while(q--){
		getline(cin,querry);
		for(int i =0; i<querry.length();i++){
			querry[i] = toupper(querry[i]);
		}
		cout<<"DANH SACH SINH VIEN NGANH "<<querry<<":"<<endl;
		if(querry == "KE TOAN"){
			for(int i =0; i<n; i++){
				if(sv[i].getmasv().substr(sv[i].getmasv().length()-7,4)=="DCKT"){
					cout<<sv[i];
				}
			}
		}
		if(querry == "CONG NGHE THONG TIN"){
			for(int i =0; i<n; i++){
				if(sv[i].getmasv().substr(sv[i].getmasv().length()-7,4)=="DCCN"&&sv[i].getlop().substr(0,1)!="E"){
					cout<<sv[i];
				}				
			}			
		}
		if(querry == "AN TOAN THONG TIN"){
			for(int i =0; i<n; i++){
				if(sv[i].getmasv().substr(sv[i].getmasv().length()-7,4)=="DCAT"&&sv[i].getlop().substr(0,1)!="E"){
					cout<<sv[i];
				}			
			}			
		}
		if(querry == "VIEN THONG"){
			for(int i =0; i<n; i++){
			if(sv[i].getmasv().substr(sv[i].getmasv().length()-7,4)=="DCVT"){
					cout<<sv[i];
				}	
			}			
		}
		if(querry == "DIEN TU"){
			for(int i =0; i<n; i++){
				if(sv[i].getmasv().substr(sv[i].getmasv().length()-7,4)=="DCDT"){
					cout<<sv[i];
				}		
			}			
		}
	}
	return 0;
}
