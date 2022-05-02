#include<bits/stdc++.h>
using namespace std;
string s;
long long n;

int main(){
	long long countA=0;
	getline(cin,s);
	cin>>n;
	long long x=0;
	if(n>=s.length()){
	long long times = n/s.length();
	for(int i=0;i<s.length();i++){
		if(s[i]=='a') x++; //so lan xuat hien cua a trong s
		}
		x=x*times;
		if(s.length()*times!=n){
			int sub = n-times*s.length();
			for(int i=0;i<sub;i++){
				if(s[i]=='a') x++;
			}
		}
		countA+=x;
	}
	else {
		for(int i=0;i<n;i++){
	if(s[i]=='a') x++;
	}
	countA+=x;
	}
	cout<<countA;
	return 0;
}
