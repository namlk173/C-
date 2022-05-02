#include<bits/stdc++.h>
using namespace std;
int t;
int a[100][100];
int n;
vector<int> x;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n;i++){
			for(int j= 0; j<n; j++){
				cin>>a[i][j];
			}
		}
		for(int i =0; i<n; i++){
			x.push_back(a[0][i]);
		}
		for(int i =1; i<n;i++){
			vector<int> b;
			for(int j =0;j<n;j++){
				for(int k =0; k<x.size(); k++){
						if(x[k]==a[i][j]){
							b.push_back(x[k]);
							break;
						}
					}
				}
				swap(x,b);
		}
		int count = 0;
		for(int i =0; i<x.size();i++){
			count= count+1;
		}
		cout<<count<<endl;
	}
return 0;
}
