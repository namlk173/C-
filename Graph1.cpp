#include<bits/stdc++.h>
using namespace std;
#define Max 100
bool chuaxet[Max];

class Graph{
	int V;
	list<int> *adj;
	public:
		Graph(int V);
		void addEdge(int v, int w);
		void printGraph();
		void DFS(int u);
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
	adj[w].push_back(v);
}

void Graph::printGraph(){
	int v; 
	list<int> ::iterator i;
	for(v=1; v<V; v++){
		cout<<"Danh Sach Ke Cua Dinh "<<v<<"\n head";
		for(i=adj[v].begin(); i!=adj[v].end(); ++i){
			cout<<"->"<<*i;
		}
		cout<<endl;
	}
}



void Graph::DFS(int u){
	list<int> ::iterator i;
	int x, y;
	stack<int> st;
	st.push(u);
	cout<<u<<" "; chuaxet[u] = false;
	while(!st.empty()){
		x = st.top(); st.pop();
		for(i=adj[x].begin(); i!=adj[x].end(); i++){
			y = adj[x][*i];
			if(chuaxet[y]){
				cout<<y<<" ";
				chuaxet[y] = false;
				st.push(x); st.push(y);
				break;
			}
		}
	}	
}

//void Graph:DFS(int u){
//	int i, x, y;
//	stack<int> st;
//	st.push(u);
//	cout<<u<<" "; chuaxet[u] = false;
//	while(!st.empty()){
//		x = st.top(); st.pop();
//		for(int i=0; i<List[x].size(); i++){
//			y = List[x][i];
//			if(chuaxet[y]){
//				cout<<y<<" ";
//				chuaxet[y] = fasle;
//				st.push(x); st.push(y);
//				break;
//			}
//		}
//	}	
//}

int main(){
	ifstream fp("dothi.txt");
	int n, m, dau, cuoi;
	fp>>n>>m; 
	for(int i=1; i<=n; i++){
		chuaxet[i] = true;
	}
	Graph gh(n+1);
	for(int i=0; i<m; i++){
		fp>>dau>>cuoi;
		gh.addEdge(dau, cuoi);
	}
	fp.close();
	gh.printGraph();
	return 0;
}
