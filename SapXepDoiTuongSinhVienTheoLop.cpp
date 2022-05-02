#include<bits/stdc++.h>
using namespace std;
int n;
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
	cin>>n;
	SinhVien sv[n];
	cin.ignore();
	for(int i =0; i<n; i++) cin>>sv[i];
	sort(sv,sv+n,compare);
	for(int i =0 ;i<n; i++) cout<<sv[i];
	return 0;
}
