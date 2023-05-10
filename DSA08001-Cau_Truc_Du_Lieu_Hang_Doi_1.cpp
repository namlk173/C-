#include<bits/stdc++.h>
using namespace std;
int t, n, q, x;

int main(){
	cin>>t;
	while(t--){
		queue<int> qu;
		cin>>n;
		while(n--){
			cin>>q;
			if(q==1){
				cout<<qu.size()<<endl;
			} 
			if(q==2){
				if(qu.empty()){
					cout<<"YES"<<endl;
				} else {
					cout<<"NO"<<endl;
				}
			}
			if(q==3){
				cin>>x;
				qu.push(x);
			}
			if(q==4){
				if(!qu.empty()){
					qu.pop();
				}
			}
			if(q==5){
				if(qu.empty()){
					cout<<"-1"<<endl;
				}else{
					cout<<qu.front()<<endl;
				}
			}
			if(q==6){
				if(qu.empty()){
					cout<<"-1"<<endl;
				}else{
					cout<<qu.back()<<endl;
				}
			}
//			cout<<endl;
		}
//		cout<<endl;
	}
	return 0;
}
