#include <bits/stdc++.h>
using namespace std;
int t;
char a[1000];
char b[1000];
int c[1000];
int temp[1000];
void reduce(char a[],char b[]){
	int x = strlen(a);
	int y = strlen(b);
	int z = max(x,y);
	if(x>y){
		int h = x-y;
		for(int i = 0; i<y;i++){
			temp[i+h] = b[i]-'0';
		}
		for(int i=x-1;i>=0;i--){
			c[i]= c[i]+(a[i]-'0') + (temp[i]);
			if(c[i]>=10){
				c[i-1]+=c[i]/10;
				c[i]=c[i]-10;
			}
		}
		if(c[-1]!=0) cout<<c[-1];
		for(int i = 0 ; i< x;i++){
		cout<<c[i];
		}
	}
	if(y>x){
		int h = y-x;
		for(int i = 0; i<x;i++){
			temp[i+h] = a[i]-'0';
		}
		for(int i =y-1;i>=0;i--){
			c[i] += (b[i]-'0') + (temp[i]);
			if(c[i]>=10){
				c[i-1]+=c[i]/10;
				c[i]-=10;
			}
		}
		if(c[-1]!=0) cout<<c[-1];
		for(int i =0;i<y;i++){
		cout<<c[i];
		}
	}
	if(x==y){
		for(int i =x-1;i>=0;i--){
			c[i] += (a[i]-'0')+ (b[i]-'0');
			if(c[i]>=10){
				c[i-1]+=c[i]/10;
				c[i]-=10;
			}
		}
		if(c[-1]!=0) cout<<c[-1];
		for(int i =0;i<x;i++){
		cout<<c[i];
		}
	}
	for(int i =0; i<1000;i++){
		temp[i]=0;
	}

}
int main(){
	cin>>t;
	cin.ignore();
	while(t--){

	cin>>a;
	cin>>b;	
	reduce(a,b);
	cout<<endl;
	}
	return 0;
}
