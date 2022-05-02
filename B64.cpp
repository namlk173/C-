#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	double x= 0;
	for(int i =1; i<=n; i++){
		x+= (double)1/i;
	}
	cout<<fixed<<setprecision(4)<<x;
	return 0;
}
