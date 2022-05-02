#include<bits/stdc++.h>
using namespace std;
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
	void setmasv(string m){
		masv = m;
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
bool compare(SinhVien s1, SinhVien s2){
	string c1 = s1.getlop();
	string c2 = s2.getlop();
	if(c1<c2){
		return 1;
	}
	else if(c1==c2){
		string m1 = s1.getmasv();
		string m2 = s2.getmasv();
		if(m1<m2){
			return 1;
		}
		else{
			return 0;
		}
	}
	return 0;
}
int main(){
	vector<SinhVien> v;
	string s;
	while(getline(cin,s)){
		if(s ==""){
			break;
		}
		SinhVien sv;
		sv.setmasv(s);
		cin>>sv;
		v.push_back(sv);
	}
	for(int i =0;i<v.size(); i++){
		cout<<s[i];
	}
	return 0;
}
