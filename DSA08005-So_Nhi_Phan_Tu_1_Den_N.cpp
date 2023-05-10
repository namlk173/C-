#include<bits/stdc++.h>
using namespace std;

int t, n;
void Print(vector<int> binary){
	for(int i=0; i<binary.size(); i++){
		cout<<binary[i];
	}
	cout<<" ";
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> binary;
		binary.push_back(1);
		while(n>=1){
			Print(binary);
			int i=binary.size()-1;
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
			n--;
		}
		cout<<endl;
	}
	return 0;
}
