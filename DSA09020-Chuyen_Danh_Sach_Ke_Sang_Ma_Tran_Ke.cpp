#include<bits/stdc++.h>
using namespace std;
int n;

int main(){
	cin>>n;
	cin.ignore();
	string s;
	int a[n+1][n+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; j++){
			a[i][j] = 0;
		}
	}
	for(int i=1; i<=n; i++){
		getline(cin, s);
		string temp;
		istringstream iss(s);
		while(iss>>temp){	
			int v = 0;
			for(int j=0; j<temp.length(); j++){
				v = v*10 + (temp[j]-'0');
			}
			a[i][v] = 1;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
