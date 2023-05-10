#include<bits/stdc++.h>
using namespace std;
int t;
unsigned long long n, res;
bool OK;

void Check(vector<unsigned long long> binary){
	unsigned long long x = 0; 
	for(int i=0; i<binary.size(); i++){
		x = x*10 + binary[i];
	}
	if(x<=n){
		res = res + 1;
	} else {
		OK = false;
	}
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		vector<unsigned long long> binary;
		binary.push_back(1);
		OK = true;
		res = 0;
		while(OK){
			Check(binary);
			int i = binary.size()-1;
			while(i>=0 && binary[i]==1){
				binary[i] = 0;
				i--;
			}
			if(i>=0){
				binary[i] = 1;
			} else{
				binary[0] = 1;
				for(int i=1; i<binary.size(); i++){
					binary[i] = 0;
				}
				binary.push_back(0);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
