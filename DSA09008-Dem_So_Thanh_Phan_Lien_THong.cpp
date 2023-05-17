#include<bits/stdc++.h>
using namespace std;
int t;
int v, e;
int d, c;

void BFS(int u, bool visited[], vector<int> a[]){
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		for(int j=0; j<a[s].size(); j++){
			if(!visited[a[s][j]]){
				visited[a[s][j]] = true;
				q.push(a[s][j]);
			}
		}
	}
	return;
}

int main(){
	cin>>t;
	while(t--){
		cin>>v>>e;
		vector<int> a[v+2];
		for(int i=0; i<e; i++){
			cin>>d>>c;
			a[d].push_back(c);
			a[c].push_back(d);
		}
		bool visited[v+1];
		int res = 0;
		for(int i=1; i<v+1; i++){
			visited[i] = false;
		}
		for(int i=1; i<v+1; i++){
			if(!visited[i]){
				res = res + 1;
				BFS(i, visited, a);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
