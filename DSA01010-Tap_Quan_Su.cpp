#include<bits/stdc++.h>
using namespace std;
#define Max 100
int a[Max], n, k, t, res;
set<int> contain;   

void process(){
	for(int i=0; i<k; i++){
		contain.insert(a[i]);
	}
	res = contain.size() - k;
	return;
}

void sinh(){
	int i=k-1;
	while(i>=0 && a[i]==n-k+i+1){
		i--;
	}
	if(i>=0){
		a[i] = a[i] + 1;
		for(int j=i+1; j<k; j++){
			a[j] = a[i] + j - i;
		}
		process();
	} else {
		res = k;
	}
}
int main(){
	cin>>t;
	while(t--){
		contain.clear();
		cin>>n>>k;
		for(int i=0; i<k; i++){
			cin>>a[i];
			contain.insert(a[i]);
		}
		sinh();
		cout<<res<<endl;
	}
	return 0;
}
