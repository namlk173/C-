#include<bits/stdc++.h>
using namespace std;
int t;
int v, e;
int d, c;
int q;
int v1, v2;

string BFS(int v1, int v2, vector<int> a[]){
	map<int, bool> visited;
	queue<int> q;
	q.push(v1);
	visited[v1] = true;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		for(int i=0; i<a[s].size(); i++){
			if(!visited[a[s][i]]){
				visited[a[s][i]] = true;
				q.push(a[s][i]);
				if(a[s][i]==v2){
					return "YES";
				}
			}
		}
	}
	return "NO";
}

int main(){
	cin>>t;
	while(t--){
		cin>>v>>e;
		vector<int> a[v+1];
		for(int i=0; i<e; i++){
			cin>>d>>c;
			a[d].push_back(c);
			a[c].push_back(d);
		}
		cin>>q;
		while(q--){
			cin>>v1>>v2;
			cout<<BFS(v1, v2, a)<<endl;
		}
	}
	return 0;
}
