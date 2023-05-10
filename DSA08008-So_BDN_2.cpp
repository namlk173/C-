#include<bits/stdc++.h>
using namespace std;
int t;
unsigned long long n;
bool OK;

void check(vector<unsigned long long> bdn){
	int mod = 0;
	for(int i=0; i<bdn.size(); i++){
		mod = (mod*10 + bdn[i])%n;
	}
	if(mod==0){
		for(int i=0; i<bdn.size(); i++){
			cout<<bdn[i];
		}
		OK = true;
	}
}


int main(){
	cin>>t;
	while(t--){
		cin>>n;
		vector<unsigned long long> bdn;
		bdn.push_back(1);
		OK = false;
		while(!OK){
			check(bdn);
			int i = bdn.size()-1;
			while(i>=0 && bdn[i]==1){
				bdn[i] = 0;
				i--;
			}
			if(i>=0){
				bdn[i] = 1;
			} else{
				bdn[0] = 1;
				for(int i=1; i<bdn.size(); i++){
					bdn[i] = 0;
				}
				bdn.push_back(0);
			}
		}
		cout<<endl;
	}
	return 0;
}
