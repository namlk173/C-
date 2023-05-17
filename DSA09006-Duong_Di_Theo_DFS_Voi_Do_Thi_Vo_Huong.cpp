#include<bits/stdc++.h>
using namespace std;
int t;
int v, e, v1, v2;
int d, c;

void DFS(int v1, int v2, vector<int> a[], int v){
	stack<int> stk;
	map<int, bool> visited;
	vector<int> way;
	int tracking[v+1];
	
	stk.push(v1);
	visited[v1] = true;
	while(!stk.empty()){
		int s = stk.top();
		stk.pop();
		for(int i=0; i<a[s].size(); i++){
			if(!visited[a[s][i]]){
				stk.push(s);
				tracking[a[s][i]] = s;
				stk.push(a[s][i]);
				visited[a[s][i]] = true;
				break;
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
		DFS(v1, v2, a, v);
	}
	return 0;
}

