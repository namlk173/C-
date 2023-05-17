#include <bits/stdc++.h>
using namespace std;
int t;
int v, e, u;

class Graph {
public:
	map<int, bool> visited;
	map<int, list<int> > adj;
	void addEdge(int v, int w);
	void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); 
}

void Graph::DFS(int v)
{
	visited[v] = true;
	cout << v << " ";
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}


int main()
{
	cin>>t;
	int d, c;
	while(t--){
		Graph g;
		cin>>v>>e>>u;
		for(int i=0; i<e; i++){
			cin>>d>>c;
			g.addEdge(d-1, c-1);
		}	
		g.DFS(u-1);
	}
	return 0;
}


