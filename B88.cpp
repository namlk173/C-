#include<bits/stdc++.h>
using namespace std;
int t;
int m,n,a,b;
int main(){
	cin>>t;
	while(t--){
		cin>>m>>n>>a>>b;
		int count= 0;
		for(int i =m; i<=n; i++){
			if(i%a==0||i%b==0){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
