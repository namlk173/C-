#include<bits/stdc++.h>
using namespace std;
int q;
stack<int> stk;

int main(){
	cin>>q;
	string s;
	cin.ignore();

	while(q--){
		getline(cin, s);
		if(s=="POP"){	//POP
			if(!stk.empty()){
				stk.pop();
			}
		} else if(s=="PRINT"){	//PRINT
			if(stk.empty()){
				cout<<"NONE"<<endl;
			} else {
				cout<<stk.top()<<endl;
			}
		} else { //PUSH
			istringstream iss(s);
			string temp;
			while(iss>>temp){}
			stringstream ss;
			ss<<temp;
			int num;
			ss>>num;
			stk.push(num);
		}
	}
	return 0;	
}
