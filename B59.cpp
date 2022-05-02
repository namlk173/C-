#include<bits/stdc++.h>
using namespace std;
int m, s;
int a[100],b[100];
void Min(int m, int s, int a[]){
	if(s>9*m||(s==0&&m>1)){
		cout<<"-1";
		return ;
	}
	if(s==0&&m==1){
		cout<<"0";
		return;
	}
	s = s-1;
 	for(int i =m-1; i>=0; i--){
		if(s >= 9){
		a[i]=9;
		s=s-9;
		} 	
		else{
		a[i] =s;
		s-=s;
		}
	}
	a[0] = a[0]+1;
	for(int i =0; i<m; i++){
	cout<<a[i];
	}
}
void Max(int m, int s, int b[]){
	if(s>9*m||(s==0&&m>1)){
		cout<<"-1";
		return ;
	}
	if(s==0&&m==1){
		cout<<"0";
		return;
	}
 	for(int i = 0; i < m; i++){
		if(s >= 9){
		b[i]=9;
		s-=9;
		} 	
		else{
		b[i] =s;
		s-=s;
		}
	}
	for(int i =0; i<m; i++){
	cout<<b[i];
	}
}
int main(){
	cin>>m>>s;
	int temp =s;
	Min(m,temp,a);
	cout<<" ";
	Max(m,s,b);
	cout<<endl;
	return 0;
}
