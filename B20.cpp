#include<bits/stdc++.h>
using namespace std;
int t, n;
bool check_snt(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	int x = sqrt(n);
	for(int i = 2; i<= x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
bool check_result(int n){
	if(check_snt(n)) return 0;
	int sum_of_number = 0;
	int sum_of_snt = 0;
	int z = n;
	int i =2;
	while(n!=0)
	{
		sum_of_number+=n%10;
		n=n/10;
	}
	while(z!=1){
		while(z%i==0){
			sum_of_snt+=i;
			z=z/i;
		}
		i++;
	}
	if(sum_of_number==sum_of_snt) return 1;
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<check_result(n);
		cout<<endl;
	}
	return 0;
}
