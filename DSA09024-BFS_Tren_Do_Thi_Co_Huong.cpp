#include<bits/stdc++.h>
using namespace std;
int t;
int v, e, u;
int d, c;

void BFS(int u, vector<int> a[]){
	map<int, bool> visited;
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		cout<<x<<" ";
		for(int j=0; j<a[x].size(); j++){
			if(!visited[a[x][j]]){
				q.push(a[x][j]);
				visited[a[x][j]] = true;
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
		BFS(u, a);
	}
}
