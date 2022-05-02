#include<bits/stdc++.h>
using namespace std;
int bob[3];
int alice[3];
int result[2];
int main(){
	for(int i=0;i<3;i++){
		cin>>bob[i];
	}
	for(int i=0;i<3;i++){
		cin>>alice[i];
	}
	for(int i=0;i<3;i++){
		if(bob[i]>alice[i]){
			result[0]+=1;
		}
		else if(bob[i]<alice[i]){
			result[1]+=1;
		}
	}
	cout<<result[0]<<" "<<result[1];
	return 0;
}
