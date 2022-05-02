#include<bits/stdc++.h>
using namespace std;
int n;
int q;
string DN;
struct SinhVien{
	int stt;
	string MaSV;
	string HoTen;
	string Lop;
	string email;
	string TenDN;
};
void Nhap(SinhVien sv[], int n){
	int index = 1;
	for(int i =0; i<n; i++){
		getline(cin,sv[i].MaSV);
		getline(cin,sv[i].HoTen);
		getline(cin,sv[i].Lop);
		getline(cin,sv[i].email);
		getline(cin,sv[i].TenDN);
		sv[i].stt = index++;
	}
}
void In(vector<SinhVien> sv, int n){
	for(int i =0; i<n;i++){
		cout<<sv[i].stt<<" "<<sv[i].MaSV<<" "<<sv[i].HoTen<<" "<<sv[i].Lop<<" "<<sv[i].email<<" "<<sv[i].TenDN<<endl;
	}
}
bool compare(SinhVien s1, SinhVien s2){
	return s1.HoTen < s2.HoTen;
}
int main(){
	vector<SinhVien> list_query;
	cin>>n;
	cin.ignore();
	struct SinhVien sv[1000];
	Nhap(sv,n);
	cin>>q;
	cin.ignore();
	while(q--){
		cin>>DN;
		for(int i =0 ;i<n; i++){
			if(sv[i].TenDN == DN){
				list_query.push_back(sv[i]);
			}
		}
		sort(list_query.begin(), list_query.end(), compare);
		In(list_query,list_query.size());
		list_query.clear();
	}
	return 0;
}
