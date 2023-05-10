#include<bits/stdc++.h>
using namespace std;
bool OK;
int t, n;

void Print(vector<int> binary){
	int mod = 0;
	for(int i=0; i<binary.size(); i++){
		mod = (mod*10 + binary[i])%n;	
	}
	
	if(mod==0){
		for(int i=0; i<binary.size(); i++){
			cout<<binary[i];
		}
		OK = true;
	}
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> binary;
		binary.push_back(9);
		OK = false;
		while(!OK){
			Print(binary);
			int i=binary.size()-1;
			while(i>=0 && binary[i]==9){
				binary[i] = 0;
				i--;
			}
			if(i>=0){
				binary[i] = 9;
			} else{
				binary[0] = 9;
				for(int i=1; i<binary.size(); i++){
					binary[i] = 0;
				}
				binary.push_back(0);
			}
		}
		cout<<endl;
	}
	return 0;
}
