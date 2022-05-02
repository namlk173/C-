#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string hoTen;
	string MaSV = "B20DCCN001";
	char Lop[15];
	char NgaySinh[15];
	float GPA;
};
void nhap(SinhVien &a){
	getline(cin,a.hoTen);
	cin>>a.Lop;
	cin>>a.NgaySinh;
	cin>>a.GPA;
}
void in(SinhVien a){
	cout<<a.MaSV<<" "<<a.hoTen<<" "<<a.Lop<<" ";
	string ngay ="";
	string thang ="";
	string nam =""; 
	int k =0;
	for(int i =0;i<strlen(a.NgaySinh);i++){
		if(a.NgaySinh[i]=='/'){
			for(int j =k; j<i; j++){
				ngay.push_back(a.NgaySinh[j]);
				k = i+1;
			}
			break;
		}
	}
	for(int i =k+1;i<strlen(a.NgaySinh);i++){
		if(a.NgaySinh[i]=='/'){
			for(int j =k; j<i; j++){
				thang.push_back(a.NgaySinh[j]);
				k = i;
			}
			break;
		}
	}
	for(int i = k+1;i<strlen(a.NgaySinh);i++){
		nam.push_back(a.NgaySinh[i]);
	}
	if(ngay.length()<2){
		for(int i =0; i< 2-ngay.length();i++){
			cout<<"0";
		}
		cout<<ngay;
	}
	else{
		cout<<ngay;
	}
	cout<<"/";
	if(thang.length()<2){
		for(int i =0; i< 2-thang.length();i++){
			cout<<"0";
		}
		cout<<thang;
	}
	else{
		cout<<thang;
	}
	cout<<"/";
	if(thang.length()<4){
		for(int i =0; i< 4-nam.length();i++){
			cout<<"0";
		}
		cout<<nam;
	}
	else{
		cout<<nam;
	}
	cout<<" "<<fixed<<setprecision(2)<<a.GPA;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
