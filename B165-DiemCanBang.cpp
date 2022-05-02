#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int a[100000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		int sum = 0;
		for(int i =0 ;i<n;i++){
			sum =sum+=a[i];
		}
		bool flag =0;
		int sum_of_left = 0;
		for(int i =0; i<n; i++){
			if((sum-a[i])/2==sum_of_left){
				cout<<i+1<<endl;
				flag  =1;
				break;
			}
			sum_of_left +=a[i];
		}
		if(flag ==0){
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
