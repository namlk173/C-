#include<bits/stdc++.h>
using namespace std;
int t;
int v, e;
int d, c;

int Euler(vector<int> a[], int v){
	int count = 0;
	for(int i=1; i<=v; i++){
		if(a[i].size()%2!=0) count = count + 1;
	}
	if(count==0){
		return 2;
	}
	if(count==2){
		return 1;
	}
	return 0;
}

int main(){
	cin>>t;
	while(t--){
		cin>>v>>e;
		vector<int> a[v+1];
		for(int i=0; i<e; i++){
			cin>>d>>c;
			a[d].push_back(c);
			a[c].push_back(d);
		}
		cout<<Euler(a, v)<<endl;
	}
	return 0;
}
