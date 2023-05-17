#include<bits/stdc++.h>
using namespace std;
int t, v, e, u;
int d, c;

void BFS(int u, vector<int> a[]){
	map<int, bool> visited;
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int s = q.front();
		cout<<s<<" ";
		q.pop();
		for(int j=0; j<a[s].size(); j++){
			if(!visited[a[s][j]]){
				q.push(a[s][j]);
				visited[a[s][j]] = true;
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
			a[c].push_back(d);
		}
		BFS(u, a);
	}
	return 0;
}
