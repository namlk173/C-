#include<bits/stdc++.h>
using namespace std;
int n;
bool check(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	int x =sqrt(n);
	for(int i =2 ;i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void analys(int n){
	if(check(n)) cout<<n<<" "<<"1"<<endl;
	else{
		int i =2;
		while(n!=1){
			int count =0;
			while(n%i==0){
				count++;
				n=n/i;
			}
			if(count!=0) cout<<i<<" "<<count<<endl;
			i++;
		}
	}
}
int main(){
	cin>>n;
	analys(n);
	return 0;
}
