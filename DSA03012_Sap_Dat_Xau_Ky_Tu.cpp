#include<bits/stdc++.h>
using namespace std;
int t;
string s;

string Result(char a[], int n){
	if(n==1) return "1";
	int Max = 0, temp = 1;
	for(int i=0; i<n-1; i++){
		if(a[i] == a[i+1]){
			temp = temp + 1;
		} else {
			temp = 1;
		}
		Max = max(Max, temp);
	}
	if(Max > n/2 + (n%2)){
		return "-1";
	}
	return "1";
}

int main(){
	cin>>t;
	while(t--){
		cin>>s;
		int n=s.length();
		char a[n];
		for(int i=0; i<n; i++){
			a[i] = s[i];
		}
		sort(a, a+n);
		cout<<Result(a, n)<<endl;
	}	
	return 0;
}
