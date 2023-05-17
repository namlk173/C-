#include<bits/stdc++.h>
using namespace std;
int t, d, c;
int apexs, edges;

int main(){
	cin>>t;
	while(t--){
		cin>>apexs>>edges;
		vector<int> graph[apexs+1];
		while(edges--){
			cin>>d>>c;
			graph[d].push_back(c);
		}
		for(int i=1; i<=apexs; i++){
			cout<<i<<": ";
			for(int j=0; j<graph[i].size(); j++){
				cout<<graph[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
