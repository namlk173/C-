//Chia Het cho 3 so nguyen;
//so 0 khong phai so nguyen duong
#include<bits/stdc++.h>
using namespace std;
int t;
int x,y,z,n;
long long GCD(int x, int y){
	while(x!=0){
		int temp = x;
		x= y%x;
		y= temp;
	}
	return y;
}
long long LCM(int x, int y){
	return x/GCD(x,y)*y;
}
long long find_result(int x, int y, int z, int n){
	if(n==0){
		return -1;
	}
	long long bcnn_xy = LCM(x,y);
	long long bcnn = LCM(bcnn_xy, z);
	long long So_nho_Nhat = pow(10,n-1);
	long long mod = So_nho_Nhat%bcnn;
	if(mod==0){
		return So_nho_Nhat;
	}
	So_nho_Nhat += bcnn - mod;
	if(So_nho_Nhat<pow(10,n)){
		return So_nho_Nhat;
	}
	else{
		return -1;
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>x>>y>>z>>n;
		cout<<find_result(x,y,z,n)<<endl;
	}
	return 0;
}
