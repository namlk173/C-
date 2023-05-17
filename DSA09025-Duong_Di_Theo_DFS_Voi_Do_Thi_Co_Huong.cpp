#include<bits/stdc++.h>
using namespace std;
int t;
int v, e, d1, d2;
int d, c;

void DFS(int d1, int d2, vector<int> a[], int v){
	int tracking[v+1];
	map<int, bool> visited;
	stack<int> stk;
	vector<int> way;
	stk.push(d1);
	visited[d1] = true;
	while(!stk.empty()){
		int s = stk.top();
		stk.pop();
		for(int j=0; j<a[s].size(); j++){
			if(!visited[a[s][j]]){
				tracking[a[s][j]] = s;
				visited[a[s][j]] = true;
				stk.push(s);
				stk.push(a[s][j]);
				break;
			}
		}
	}
	if(!visited[d2]){
		cout<<"-1"<<endl;
		return;
	}
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
		DFS(d1, d2, a, v);
	}
	return 0;
}
