#include<bits/stdc++.h>
using namespace std;
string s;
int n;
vector<int> stk;

void in(){
	if(stk.empty()) cout<<"empty"<<endl;
	else {
		for(int i=0; i<stk.size(); i++){
			cout<<stk[i]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	while(cin>>s){
		if(s=="pop"){
			stk.pop_back();
		} else if(s=="show"){
			in();
		} else{
			cin>>n;
			stk.push_back(n);
		}
	}
	return 0;	
}
