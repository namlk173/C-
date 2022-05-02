#include<bits/stdc++.h>
using namespace std;
int stt =1;
struct SinhVien{
	string hoTen;
	string MaSV;
	char Lop[15];
	char NgaySinh[15];
	float GPA;
};
void nhap(SinhVien a[], int n){
	for(int i =0; i<n; i++){
	getline(cin,a[i].hoTen);
	cin>>a[i].Lop;
	cin>>a[i].NgaySinh;
	cin>>a[i].GPA;
	}

}
void in(SinhVien a[], int n){
	for(int i =0; i<n;i++){
	cout<<a[i].MaSV<<" "<<a[i].hoTen<<" "<<a[i].Lop<<" ";
	string ngay ="";
	string thang ="";
	string nam =""; 
	int k =0;
	for(int j =0;j<strlen(a[i].NgaySinh);j++){
		if(a[i].NgaySinh[j]=='/'){
			for(int m =k; m<j; m++){
				ngay.push_back(a[i].NgaySinh[m]);
				k = j+1;
			}
			break;
		}
	}
	for(int j =k+1;j<strlen(a[i].NgaySinh);j++){
		if(a[i].NgaySinh[j]=='/'){
			for(int m =k; m<j; m++){
				thang.push_back(a[i].NgaySinh[m]);
				k = j;
			}
			break;
		}
	}
	for(int j = k+1;j<strlen(a[i].NgaySinh);j++){
		nam.push_back(a[i].NgaySinh[j]);
	}
	if(ngay.length()<2){
		for(int j =0; j< 2-ngay.length();j++){
			cout<<"0";
		}
		cout<<ngay;
	}
	else{
		cout<<ngay;
	}
	cout<<"/";
	if(thang.length()<2){
		for(int j =0; j< 2-thang.length();j++){
			cout<<"0";
		}
		cout<<thang;
	}
	else{
		cout<<thang;
	}
	cout<<"/";
	if(thang.length()<4){
		for(int j =0; j< 4-nam.length();j++){
			cout<<"0";
		}
		cout<<nam;
	}
	else{
		cout<<nam;
	}
	cout<<" "<<fixed<<setprecision(2)<<a[i].GPA;
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
