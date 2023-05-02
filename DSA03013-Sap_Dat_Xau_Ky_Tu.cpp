#include<bits/stdc++.h>
using namespace std;
int t, d;
string s;

string Result(char a[], int l, int d){
	int Max = 0, temp = 1;
	for(int i=0; i<l-1; i++){
		if(a[i] == a[i+1]){
			temp = temp + 1;
		} else {
			temp = 1;
		}
		Max = max(Max, temp);
	}
//	if(l >= Max*d - (d-1)) {
//		return "1";
//	}
//	return "-1";
	if(Max > (l-1)/d + 1) {
		return "-1";
	} 
	return "1";
}

int main(){
	cin>>t;
	while(t--){
		cin>>d;
		cin>>s;
		int l = s.length();
		char a[l];
		for(int i=0; i<l; i++){
			a[i] = s[i];
		}
		sort(a, a+l);
		cout<<Result(a, l, d)<<endl;
	}         
	return 0;
}
