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
		cout<<"DANH SACH SINH VIEN LOP "<<querry<<":"<<endl;
		for(int i =0; i<n;i++){
			if(sv[i].getlop()==querry){
				cout<<sv[i];
			}
		}
	}
	return 0;
}
