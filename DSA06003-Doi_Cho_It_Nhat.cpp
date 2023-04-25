#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int res = 0;
		for(int i=0; i<n; i++){
			int min_index = i;
			for(int j=i+1; j<n; j++){
				if(a[min_index] > a[j]){
					min_index = j;
				}
			}
			if(min_index != i){
				res = res + 1;
				swap(a[min_index], a[i]);
			}
		}
		cout<<res<<endl;
	}
}
