#include<bits/stdc++.h>
using namespace std;
int t;
long long a;
long long x, y;
long long find_result(long long x, long long y){
	while(x!=0){
		long long temp = x;
		x = y % x;
		y = temp;
	}
	return y;
	
}
int main(){
	cin>>t;
	while(t--){
	cin>>a;
	cin>>x;
	cin>>y;
	int gcd_xy = find_result(x,y);
	for(int i = 0; i < gcd_xy; i++){
		cout<<a;
	}
	cout<<endl;
	}
return 0;
}
