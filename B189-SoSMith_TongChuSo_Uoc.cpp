#include<bits/stdc++.h>
using namespace std;
int t;
int n;
bool check_SNT(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	int x = sqrt(n);
	for(int i =2; i<=x;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
bool check(int n){
	int temp = n;
	int sum_of_number = 0;
	while(temp!=0){
		sum_of_number +=temp%10;
		temp=temp/10;
	}
	if(check_SNT(n)==1){
		return 0;
	}
	else{
		int sum_of_snt=0;
		int i =2;
		while(n!=1){
			while(n%i==0){
				int x= i;
				while(x!=0){
					sum_of_snt+=x%10;
					x=x/10;
				}
				n=n/i;
			}
			i++;
		}
		if(sum_of_number==sum_of_snt){
			return 1;
		}
		else{
			return 0;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		if(check(n)==1){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}
