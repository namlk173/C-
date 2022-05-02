#include<bits/stdc++.h>
using namespace std;
int t;
int a[100001];
int l,r;
bool check(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	int x = sqrt(n);
	for(int i =2;i<=x;i++){
		if(n%i==0)return 0;
	}
	return 1;
}
void Gan(int a[]){
	for(int i =1; i<=100000; i++){
		if(check(i)){
			a[i]=1;
		}
	}
	
}
int main(){
	cin>>t;
	while(t--){
		cin>>l>>r;
		Gan(a);
		int count =0;
		for(int i=l;i<=r;i++){
			if(a[i]==1) count +=1;
		}
		cout<<count<<endl;
	}
	return 0;
}
