#include<bits/stdc++.h>
using namespace std;
int M,N;
int t;
bool SNT(int x){
	if(x<2) return 0;
	else if(x==2) return 1;
	else {
		for(int i = 2; i <= sqrt(x); i++){
			if(x%i==0) return 0;
		}
	}
	return 1;
} 
int main(){
	cin>>t;
	while(t--){
	cin>>M>>N;
	for(int i = M; i<=N; i++){
		if(SNT(i)) {
		cout<<i;
		cout<<" ";
	}
	}
	}
	return 0;
}
