#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		istringstream iss(s);
		string temp;
		vector<string> v;
		while(iss>>temp) {
			v.push_back(temp);
		}
		for(int i=0; i<v.size(); i++){
			for(int j =0; j<v[i].length(); j++){
				v[i][j] = tolower(v[i][j]);
			}
			v[i][0] = toupper(v[i][0]);
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
