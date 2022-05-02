#include<bits/stdc++.h>
using namespace std;
int t;
char a[15];
int x[10];
int n;
vector<int> result;
int main(){
	x[0]=1;
	for(int i =1; i<10; i++){
		x[i] = x[i-1]*i;  
	}
	cin>>t;
	while(t--){
		cin>>n>>a;
		long long tich =1;
		for(int i =0; i<n; i++){
			tich= tich*(x[a[i]-'0']);
			int j =2;
			while(tich>1&&j<10){
				while(tich%x[j]==0){
					result.push_back(j);
					tich=tich/x[j];
				}
				j++;
			}
			cout<<tich;
		}
		for(int i =0;i<result.size();i++){
			cout<<result[i]<<" ";
		}
	}
	return 0;
}
