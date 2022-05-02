#include<bits/stdc++.h>
using namespace std;
int n;
int a[60];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%5==3&&a[i]>=38) a[i]+=2;
		if(a[i]%5==4&&a[i]>=38) a[i]+=1;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
