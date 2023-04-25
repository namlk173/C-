#include<bits/stdc++.h>
using namespace std;
bool kiem_tra_khong_tang(string s){
	for(int i=0; i<s.length()-1; i++){
		if(s[i] < s[i+1]) return false;
	}
	return true;
} 

bool kiem_tra_khong_giam(string s){
	for(int i=0; i<s.length()-1; i++){
		if(s[i] > s[i+1]) return false;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string n;
		cin>>n;
		if(kiem_tra_khong_tang(n) || kiem_tra_khong_giam(n)){
			cout<<"YES"<<endl;
		} else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
