#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, a[100];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int sum = 0, max_score = -100;
		for(int i=0; i<n; i++){
			sum = sum + a[i];
			max_score = max(sum, max_score);
			if(sum<0) {
				sum = 0;
			}
		}
		cout<<max_score<<endl;
	}
	return 0;
}
