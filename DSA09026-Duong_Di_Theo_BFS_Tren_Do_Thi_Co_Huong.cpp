#include<bits/stdc++.h>
using namespace std;
int t;
int v, e, d1, d2;
int d, c;

void BFS(int d1, int d2, vector<int> a[], int v){
	int tracking[v+1];
	queue<int> q;
	map<int, bool> visited;
	q.push(d1);
	visited[d1] = true;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		for(int i=0; i<a[s].size(); i++){
			if(!visited[a[s][i]]){
				tracking[a[s][i]] = s;
				q.push(a[s][i]);
				visited[a[s][i]] = true;
			}
		}
	}
	if(!visited[d2]){
		cout<<"-1"<<endl;
		return;
	}
	vector<int> way;
	int x = d2;
	way.push_back(x);
	while(x!=d1){
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
		cin>>v>>e>>d1>>d2;
		vector<int> a[v+1];
		for(int i=0; i<e; i++){
			cin>>d>>c;
			a[d].push_back(c);
		}
		BFS(d1, d2, a, v);
	}
	return 0;
}
