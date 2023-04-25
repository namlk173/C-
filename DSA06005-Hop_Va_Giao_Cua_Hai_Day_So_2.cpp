#include<bits/stdc++.h>
using namespace std;

void in(vector<int> arr) {
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void process(int a[], int b[], int n, int m){
	vector<int> hop; 
	vector<int> giao;
	int i=0, j=0;
	while(i<n && j<m){
		if(a[i] < b[j]) {
			hop.push_back(a[i]);
			i++;
		} else if(a[i] > b[j]) {
			hop.push_back(b[j]);
			j++;
		} else {
			hop.push_back(a[i]);
			giao.push_back(a[i]);
			i++;
			j++;
		}
	}
	while(i<n){
		hop.push_back(a[i]);
		i++;
	}
	while(j<m){
		hop.push_back(b[j]);
		j++;
	}
	in(hop);
	in(giao);
}

int main(){
	int t, n, m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<m; i++){
			cin>>b[i];
		}
		sort(a, a+n);
		sort(b, b+m);
		process(a, b, n, m);
	}
}
