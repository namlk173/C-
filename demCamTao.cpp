#include<bits/stdc++.h>
using namespace std;
int s,t;//vi trí có ok
int a,b;//vi tri cua 2 cay
int m,n;//so cam tao 
int a1[100000],b1[100000];
int main(){
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	int x=0,y=0;
	for(int i=0;i<m;i++){
		cin>>a1[i];
	}
	for(int i=0;i<n;i++){
		cin>>b1[i];
	}
	for(int i=0;i<m;i++){
		a1[i]+=a;
	}
	for(int i=0;i<n;i++){
		b1[i]+=b;
	}
	for(int i=0;i<m;i++){
		if(a1[i]>=s&&a1[i]<=t){
			x++;
		}
	}
		for(int i=0;i<n;i++){
		if(b1[i]>=s&&b1[i]<=t){
			y++;
		}
	}
	cout<<x<<endl<<y;	
	return 0;
}
