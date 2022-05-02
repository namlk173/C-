#include<bits/stdc++.h>
using namespace std;
int t;
long long l,r;
int a[1000001];
bool check_Snt(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	int x = sqrt(n);
	for(int i =2; i<=x;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	cin>>t;
	for(int i =0; i<1000001; i++){
		if(check_Snt(i)==1){
			a[i] = 1;
		}
		else{
			a[i]=0;
		}
	}
	while(t--){
		cin>>l>>r;
		int count =0;
		for(int i = sqrt(l); i<=sqrt(r); i++){
			if(a[i==1){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
