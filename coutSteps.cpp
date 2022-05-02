#include<bits/stdc++.h>
using namespace std;
bool c[100];
int n;
int main(){
	int count = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	int i=0;
	c[n]=1;
	while(i<n){
		if(c[i+2]==0){
			count++;
			i+=2;
		}
		else if(c[i]==0){
			count++;
			i+=1;
		}
	}
	cout<<count-1;
return 0;
}
