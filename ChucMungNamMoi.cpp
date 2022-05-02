#include<bits/stdc++.h>
using namespace std;
int n;
string a[10000];
int dem(string a[], int n){
	vector<string> result;
	for(int i =0; i<n;i++){
		bool check = 0;
		for(int j =0;j<result.size();j++){
			if(a[i]==result[j]){
				check =1;
				break;
			}
		}
		if(check ==0){
			result.push_back(a[i]);
		}
	}
	return result.size();
}
int main(){
	int n;
	string a[10000];
	cin>>n;
	cin.ignore();
	for(int i =0;i<n;i++){
		getline(cin,a[i]);
	}
	cout<<dem(a,n);
	return 0;
}
