#include<bits/stdc++.h>
using namespace std;
int t, n;
long a[100000];
long space_between;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		space_between =  pow(10,9);
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i =0; i<n-1; i++){
			space_between = min(space_between, abs(a[i]-a[i-1]));
		}
		cout<<space_between<<endl;
	}
	return 0;
}
