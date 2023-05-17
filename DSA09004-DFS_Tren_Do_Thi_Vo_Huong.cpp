#include<bits/stdc++.h>
using namespace std;
int t, v, e, u;



void DFS(int u, vector<int> a[]){
	map<int, bool> visited;
	stack<int> stk;
	stk.push(u);
	visited[u] = true;
	cout<<u<<" ";
	while(!stk.empty()){
		int x = stk.top();
		stk.pop();
		for(int j=0; j<a[x].size(); j++){
			if(!visited[a[x][j]]){
				cout<<a[x][j]<<" ";
				stk.push(x);
				stk.push(a[x][j]);
				visited[a[x][j]] = true;
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
		int d, c;
		for(int i=0; i<e; i++){
			cin>>d>>c;
			a[d].push_back(c);
			a[c].push_back(d);
		} 
//		for(int i=1; i<v+1; i++){
//			cout<<i<<": ";
//			for(int j=0; j<a[i].size(); j++){
//				cout<<a[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		DFS(u, a);
	}
	return 0;
}
