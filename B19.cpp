#include<bits/stdc++.h>
using namespace std;
int t;
int n;
bool check(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	int x = sqrt(n);
	for(int i =2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void find_result(int n){
	if(check(n)) cout<<n<<" 1";
	else
	{	int count;
		int i =2;
		while(n!=1){
		count =0;
		while(n%i==0){
			count++;
			n=n/i;
		}
		if(count>=1) cout<<i<<" "<<count<<" ";
		i++;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		find_result(n);
		cout<<endl;
	}
	return 0;
}
