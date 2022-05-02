#include<bits/stdc++.h>
using namespace std;
int n;
int x,y,z;
int main(){
	cin>>n;
	int count=0;
	while(n--){
		cin>>x>>y>>z;
		if((x==1&&y==1&&z==1)||(x==1&&y==1)||(x==1&z==1)||(y==1&&z==1)){
			count++;
		}
	}
	cout<<count;
	return 0;
}
