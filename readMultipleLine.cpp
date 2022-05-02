#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> v;
	string s = "";
	while(true){
		getline(cin,s);
		if(s==""){
			break;
		}
		v.push_back(s);
	}
	for(int i =0; i<v.size(); i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
