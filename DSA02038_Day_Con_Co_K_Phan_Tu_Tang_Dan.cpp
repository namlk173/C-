#include<bits/stdc++.h>
using namespace std;
#define Max 100
int a[Max], n, k;
int mark[Max];

void Print(){
	for(int i=1; i<=k; i++){
		cout<<a[mark[i]-1]<<" ";
	}
	cout<<endl;
}

void Try(int i){
	for(int j=mark[i-1]+1; j<=n-k+i; j++){
		mark[i] = j;
		if(i==k){
			Print();
		} else {
			Try(i+1);
		}
	}	
	return;
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		mark[0] = 0;
		Try(1);
	}
	return 0;
}
