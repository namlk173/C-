#include<bits/stdc++.h>
using namespace std;
int n, x;
string q;

int main(){
	cin>>n;
	deque<int> dq;
	while(n--){
		cin>>q;
		if(q=="PUSHFRONT"){
			cin>>x;
			dq.push_front(x);
		} 
		if(q=="PUSHBACK"){
			cin>>x;
			dq.push_back(x);
		}
		if(q=="PRINTFRONT"){
			if(!dq.empty()){
				cout<<dq.front()<<endl;
			} else{
				cout<<"NONE"<<endl;
			}
		}
		if(q=="PRINTBACK"){
			if(!dq.empty()){
				cout<<dq.back()<<endl;
			} else{
				cout<<"NONE"<<endl;
			}
		}
		if(q=="POPFRONT"){
			if(!dq.empty()){
				dq.pop_front();
			}
		}
		if(q=="POPBACK"){
			if(!dq.empty()){
				dq.pop_back();
			}
		}
	}
	return 0;
}
