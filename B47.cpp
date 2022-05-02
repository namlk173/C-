#include<bits/stdc++.h>
using namespace std;
int t;
int n, a[1000000], markup[1000000];
void element_repeat(int markup[], int n, int a[]){
	for(int i =0; i<n; i++){
		markup[i] = 0;
	}
	for(int i =0; i<n; i++){
		for(int j =i+1; j<n; j++)
	{	
	if(a[i]==a[j]) markup[j] =1;
	}	
	}
} 
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		bool flag= 0;
		element_repeat(markup, n, a);
		for(int i =0; i<n; i++){
			if(markup[i]!=0) {
				flag = 1;
				cout<<a[i];
				break;
			}
		}
		if(flag==0) cout<<-1;
		cout<<endl;
	}
	return 0;
} 
