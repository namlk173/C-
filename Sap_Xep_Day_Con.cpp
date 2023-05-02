#include<bits/stdc++.h>
using namespace std;
int t, n;

void sap_xep_doan_con(long long a[], int n){
	long long Max[n], Min[n];
	long long Ma = a[0];
	for(int i=0; i<n; i++){
		Ma = Ma>a[i]?Ma:a[i];
		Max[i] = Ma;
	}
	long long Mi = a[n-1];
	for(int i=n-1; i>=0; i--){
		Mi = Mi<a[i]?Mi:a[i];
		Min[i] = Mi;
	}
	vector<int> index;
	int res = 0;
	for(int i=0; i<n-1; i++){
		if(Max[i] <= Min[i+1]){
			index.push_back(i+1);
			res= res + 1;
		}
	}
	cout<<res<<endl;
	for(int i=0; i<index.size(); i++){
		cout<<index[i]<<" ";
	}
	cout<<endl;
	return;
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sap_xep_doan_con(a, n);
	}	
	return 0;
}
