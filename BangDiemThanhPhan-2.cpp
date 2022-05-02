#include<bits/stdc++.h>
using namespace std;
int n;
struct SinhVien{
	string MaSv;
	string TenSv;
	string lop;
	float diem1, diem2, diem3;
};
void nhap(SinhVien s[], int n){
	for(int i =0; i<n; i++){
		getline(cin,s[i].MaSv);
		getline(cin,s[i].TenSv);
		getline(cin,s[i].lop);
		cin>>s[i].diem1;
		cin>>s[i].diem2;
		cin>>s[i].diem3;
		cin.ignore();
	}
}
void in(SinhVien s[], int n){
	for(int i =0; i<n; i++){
		cout<<i+1<<" "<<s[i].MaSv<<" "<<s[i].TenSv<<" "<<s[i].lop<<" "
		<<fixed<<setprecision(1)<<s[i].diem1<<" "<<s[i].diem2<<" "<<s[i].diem3<<endl;
	}
}
bool compare(SinhVien x, SinhVien y){
	return x.TenSv < y.TenSv;
}
int main(){
	cin>>n;
	cin.ignore();
	SinhVien s[100];
	nhap(s,n);
	sort(s,s+n,compare);
	in(s,n);
	return 0;
} 
