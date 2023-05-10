#include<bits/stdc++.h>
using namespace std;
int t, n;
vector<vector<int> > res;

void Print_Result(){
	cout<<res.size()<<endl;
	for(int i=0; i<res.size(); i++){
		for(int j=0; j<res[i].size(); j++){
			cout<<res[i][j];
		}
		cout<<" ";
	}
	return;
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		res.clear();
		vector<int> lp;
		for(int i=0; i<n; i++){
			lp.push_back(8);
		}
		while(lp.size()>0){
			res.push_back(lp);
			int i = lp.size()-1;
			while(i>=0 && lp[i]==6){
				lp[i] = 8;
				i--;
			}
			if(i>=0){
				lp[i] = 6;
			} else{
				for(int i=0; i<lp.size(); i++){
					lp[i] = 8;
				}
				lp.pop_back();
			}
		}
		Print_Result();
		cout<<endl;
	}
	return 0;
}
