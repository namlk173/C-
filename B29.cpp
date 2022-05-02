#include<bits/stdc++.h>
using namespace std;
int t;
int x, y ,p;
int main(){
	cin>>t;
	while(t--){
		cin>>x>>y>>p;
		int result = 1;
		for(int i = 1; i<=y;i++){
			int mod = x%p;
			result = (result * mod) %p;
		}
		cout<<result;
		cout<<endl;
	}
	return 0;
}
