#include<bits/stdc++.h>
using namespace std;
int x1,v1,x2,v2;
int main(){
	cin>>x1>>v1>>x2>>v2;
	if(v1==v2&&x1!=x2){
		cout<<"NO";
	}
	else if(v1==v2&&x1==x2){
		cout<<"YES";
	}
	else{
	int distance_speed = abs(v1-v2);
	int distance = abs(x1-x2);
	int time = distance/distance_speed;
	if((x1+v1*time)==(x2+v2*time)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	}
	return 0;
}
