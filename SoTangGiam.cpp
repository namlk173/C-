#include<bits/stdc++.h>
using namespace std;
int t;
int n;
bool Ktra_Snt(int x){
	if(x<2) return 0;
	if(x==2) return 1;
	int sq = sqrt(x);
	for(int i =2; i<=sq; i++){
		if(x%i==0) return 0;
	}
	return 1;
}
bool Ktra_tang(int x){
	while(x>=10){
		if(x%10 <= (x/10)%10){
			return 0;
		}
		else{
			x= x/10;
		}
	}
	return 1;
}
bool check_Giam(int x){
	while(x>=10){
		if(x%10 >= (x/10)%10){
			return 0;
		}
		else{
			x = x/10;
		}
	}
	return 1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int count =0;
		int x = 1;
		int y =1;
		for(int i = 0; i<n-1;i++){
			x = x*10;
		}
		for(int i = 0; i<n;i++){
			y= y*10;
		}
		for(int i= x; i<y; i++){
			if(check_Giam(i)==1||Ktra_tang(i)==1){
				if(Ktra_Snt(i)){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
