#include<bits/stdc++.h>
using namespace std;
int t;
struct HuMan{
	string ten;
	string ngaySinh;
};
void Nhap(HuMan a[], int n){
	for(int i =0 ;i<n; i++){
		cin>>a[i].ten;
		cin>>a[i].ngaySinh;
	}
}
bool compare(HuMan a, HuMan b){
	string s1 = a.ngaySinh;
	string s2 = b.ngaySinh;
	int n1 =s1.length();
	int n2 = s2.length();
	if(s1.substr(n1-4,n1) > s2.substr(n2-4,n2)){
		return 1;
	}
	else if(s1.substr(n1-4,n1) == s2.substr(n2-4,n2)){
		if(s1.substr(n1-7,n1-5) > s2.substr(n2-7,n2-5)){
			return 1;
		}
		else if(s1.substr(n1-7,n1-5) == s2.substr(n2-7,n2-5)){
			if(s1.substr(n1-10,n1-8) > s2.substr(n2-10,n2-8)){
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	cin>>t;
	cin.ignore();	
	HuMan a[100];
	Nhap(a, t);
	sort(a,a+t,compare);
	cout<<a[0].ten<<endl;
	cout<<a[t-1].ten<<endl;
	return 0;
	
}
