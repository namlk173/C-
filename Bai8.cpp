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
		for(int i=1; i<v.size(); i++){
			for(int j =0; j<v[i].length(); j++){
				v[i][j] = tolower(v[i][j]);
			}
			v[i][0] = toupper(v[i][0]);
			if(i==v.size()-1)  {
				cout<<v[i];	
			} else{
				cout<<v[i]<<" ";
			}
			
		}
		for(int i=0; i<v[0].length(); i++){
			v[0][i] = toupper(v[0][i]);
		}
		cout<<", "<<v[0]<<endl;
		cout<<endl;
	}
	return 0;
}
