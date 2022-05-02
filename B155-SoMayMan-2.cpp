#include<bits/stdc++.h>
using namespace std;
string a;
int t;
int PhanTich(string a){
	int n= a.length();
	long long sum = 0;
	for(int i =0; i<n; i++){
		sum= sum + a[i]-'0';
	}
	while(sum > 9){
		int temp = 0;
		while(sum!=0){
			temp = temp + sum%10;
			sum = sum/10;
		}
		sum = temp; 
	}
	return sum;
}
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,a);
		if(PhanTich(a)==9){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
} 
