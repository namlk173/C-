#include<bits/stdc++.h>
using namespace std;
int t;
int v, e, v1, v2;
int d, c;

void BFS(int v1, int v2, vector<int> a[], int v){
	queue<int> q;
	map<int, bool> visited;
	int tracking[v+1];
	vector<int> way;
	
	q.push(v1);
	visited[v1] = true;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		for(int i=0; i<a[s].size(); i++){
			if(!visited[a[s][i]]){
				q.push(a[s][i]);
				tracking[a[s][i]] = s;
				visited[a[s][i]] = true;
			}
		}
	}
	if(!visited[v2]){
		cout<<"-1"<<endl;
		return;
	}
	
	int x = v2;
	way.push_back(x);
	while(x!=v1){
		x = tracking[x];
		way.push_back(x);
	}
	for(int i=way.size()-1; i>=0; i--){
		cout<<way[i]<<" ";
	}
	cout<<endl;
	return;
}

int main(){
	cin>>t;
	while(t--){
		cin>>v>>e>>v1>>v2;
		vector<int> a[v+1];
		for(int i=0; i<e; i++){
			cin>>d>>c;
			a[d].push_back(c);
			a[c].push_back(d);
		}
		BFS(v1, v2, a, v);
	}
	return 0;
}
