#include<bits/stdc++.h>
using namespace std;
unsigned int t, start, e;
int apexs, edges;

int main(){
	cin>>t;
	while(t--){
		cin>>apexs>>edges;
		vector<int> graph[apexs+1];
		while(edges--){
			cin>>start>>e;
			graph[start].push_back(e);
			graph[e].push_back(start);
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
