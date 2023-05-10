#include<bits/stdc++.h>
using namespace std;
int n, x;
string q;

int main(){
	cin>>n;
	queue<int> qu;
	while(n--){
		cin>>q;
		if(q=="PUSH"){
			cin>>x;
			qu.push(x);
		} else if(q=="POP"){ 
			if(!qu.empty()){
				qu.pop();
			}
		} else {
			if(!qu.empty()){
				cout<<qu.front()<<endl;
			} else{
				cout<<"NONE"<<endl;
			}
		}
	}
	return 0;
}
