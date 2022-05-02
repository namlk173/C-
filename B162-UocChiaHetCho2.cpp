#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int dem_Uoc(int n){
	int count =0;
	for(int i =1; i<=sqrt(n);i++){
		if(n%i==0 && i%2==0){
			count++;
		}
		if(n%(n/i)==0 && n/i!=i && (n/i)%2==0){
			count++;
		}
	}
	return count;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<dem_Uoc(n)<<endl;
	}
	return 0;
}
