#include<bits/stdc++.h>
using namespace std;
int n;
bool check(int x){
	int flag = 0;
	while(x!=0){
		if((x%10)%2==0){
			flag= flag + 1;
		}
		else if((x%10)%2!=0){
			flag = flag - 1;
		}
		x=x/10;
	}
	if(flag==0) return 1;
	return 0;
}
int main(){
	cin>>n;
	int h = pow(10,n-1);
	int k = pow(10,n);
	int count =0;
	for(int i =h; i< k; i++){
		if(check(i)==1){
			cout<<i<<" ";
			count++;
			if(count == 10){
				cout<<endl;
				count = 0;
			}
		}
	}
	return 0;
}
