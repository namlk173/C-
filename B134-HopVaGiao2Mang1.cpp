#include<bits/stdc++.h>
using namespace std;
int t;
int m,n,a[100000],b[100000];
void printUnion(int a[],int b[], int n, int m){
	int i =0;
	int j =0;
	while(i<n&&j<m){		
		if(a[i+1]==a[i]){
			i++;
		}
		if(b[j+1]==b[j]){
			j++;
		}
		if(a[i]<b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		else if(a[i]>b[j]){
			cout<<b[j]<<" ";
			j++;
		}
		else if(a[i]==b[j]){
			cout<<a[i]<<" ";
			i++;
			j++;
		}
	}
	while(i<n){
		cout<<a[i]<<" ";
		i++;
	}
	while(j<m){
		cout<<b[j]<<" ";
		j++;
	}
}
void printIntersection(int a[], int b[], int n, int m){
	int i =0;
	int j =0;
	while(i<n&&j<m){
		if(a[i]==b[j]){
			cout<<a[i]<<" ";
			i++;
			j++;
		}
		else if(a[i]<b[j]){
			i++;
		}
		else{
			j++;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		for(int i =0;i<m;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		printUnion(a,b,n,m);
		cout<<endl;
		printIntersection(a,b,n,m);
		cout<<endl;		
	}
	return 0;
}
