#include<bits/stdc++.h>
using namespace std;
int n;
bool check(int x){
	while(x>=10){
		if(x%10 >= (x/10)%10){
			return false;
			break;
		}
		else x/=10; 
	}
	return true;
}
int main(){
	cin>>n;
	int tmp = pow(10,n);
	for(int i=10;i<=tmp;i++){
		if(check(i)){
			cout<<i<<" ";
		}
	}
	return 0;
}
	
