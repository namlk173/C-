#include<bits/stdc++.h>
using namespace std;
int t, n, a[10000000];

int KhoangCach(int a[],int n){
	int Max = 0;
	int i =0;
	int j = n-1;
	while(i<=j){
		if(a[i]<=a[j]){
			Max = abs(i-j);
			break;	
		}
		else{
			i++;
		}
	}
	i =0;
	j = n-1;
	while(i<=j){
		if(a[i]<=a[j]){
			Max = max(Max,abs(i-j));
			break;	
		}
		else{
			j--;
		}
	}
	i =0;
	j = n-1;
	while(i<=j){
		if(a[i]<=a[j]){
			Max = max(Max,abs(i-j));
			break;	
		}
		else{
			j--;
			i++;
		}
	}
	return Max;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n;i++){
			cin>>a[i];
		}
		cout<<KhoangCach(a,n)<<endl;
	}
}
