#include<bits/stdc++.h>
using namespace std;
int t, n;

void Print(vector<int> lp){
	for(int i=0; i<lp.size(); i++){
		cout<<lp[i];
	}
	cout<<" ";
	return;
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> lp;
		for(int i=0; i<n; i++){
			lp.push_back(8);
		}
		while(lp.size()>0){
			Print(lp);
			int i = lp.size() - 1;
			while(i>=0 && lp[i]==6){
				lp[i] = 8;
				i--;
			}
			if(i>=0){
				lp[i] = 6;
			} else {
				for(i=0; i<lp.size(); i++){
					lp[i] = 8;
				}
				lp.pop_back();
			}
		}
		cout<<endl;
	}
	return 0;
}
