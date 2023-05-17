#include<bits/stdc++.h>
using namespace std;
int t;
int v, e;
int d, c;

map<int, bool> visited;

void BFS(int u, vector<int> a[]){
	visited[u] = true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int s = q.front();
		q.pop();
		for(int i=0; i<a[s].size(); i++){
			if(!visited[a[s][i]]){
				q.push(a[s][i]);
				visited[a[s][i]] = true;
			}
		}
	}
}

int main(){
	cin>>t;
	while(t--){
		cin>>v>>e;
		vector<int> a[v+1];
		visited.clear();
		for(int i=0; i<e; i++){
			cin>>d>>c;
			a[d].push_back(c);
		}
		int res = 0;
		for(int i=1; i<v+1; i++){
			if(!visited[i]){
				res = res + 1;
				BFS(i, a);
			}
		}
		if(res==1){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
