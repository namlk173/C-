#include <bits/stdc++.h>
using namespace std;
int M,N,A,B;
int t;
int main(){
	cin>>t;
	while(t--){
		cin>>M>>N>>A>>B;
		int result = 0;
		for(int i = M; i<=N; i++){
			if(i%A==0||i%B==0){
				result+=1;
			}
		}
		cout<<result;
	}
	return 0;
}
