#include<bits/stdc++.h>
using namespace std;
int t;
int v, e, u;
int d, c;

void DFS(int u, vector<int> a[]){
	map<int, bool> visited;
	stack<int> stk;
	stk.push(u);
	visited[u] = true;
	cout<<u<<" ";
	while(!stk.empty()){
		int s = stk.top();
		stk.pop();
		for(int j=0; j<a[s].size(); j++){
			if(!visited[a[s][j]]){
				cout<<a[s][j]<<" ";
				stk.push(s);
				stk.push(a[s][j]);
				visited[a[s][j]] = true;
				break;
			}
		}
	}
	cout<<endl;
	return;
}

int main(){
	cin>>t;
	while(t--){
		cin>>v>>e>>u;
		vector<int> a[v+1];
		for(int i=0; i<e; i++){
			cin>>d>>c;
			a[d].push_back(c);
		}
		
		DFS(u, a);
	}
	return 0;
}
