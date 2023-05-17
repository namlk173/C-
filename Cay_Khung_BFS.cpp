#include<iostream>
#include <list>
#include <fstream>
#include <iomanip>
#include <stack>

using namespace std;
struct canh { //bi?u di?n m?t c?nh c?a d? th?
  int dau; //d?nh d?u c?a c?nh
  int cuoi; //d?nh cu?i c?a c?nh
};
class Graph { //xây d?ng l?p d? th?
  private: int V; // s? d?nh c?a d? th?
  list < int > * adj; // con tr? d?n m?ng các danh sách k?
  bool * chuaxet; //m?ng chua xét
  canh * T; //t?p c?nh c?a cây khung
  int sc; //s? c?nh c?a cây khung
  public: Graph(int V); // constructor c?a l?p
  void addEdge(int v, int w); // thêm m?t c?nh vào d? th?
  void Tree_BFS(int u); //thu?t toán Tree-BFS
  void Tree_DFS(int u); //thu?t toán Tree-DFS
};
Graph::Graph(int V) { //constructor c?a l?p
  this -> V = V; //thi?t l?p t?p d?nh
  adj = new list < int > [V]; //thi?t l?p V danh sách k?
  T = new canh[V];
  sc = 1; //thi?t l?p s? c?nh cây khung
  chuaxet = new bool[V]; //thi?t l?p giá tr? m?ng chua xét
  for (int u = 0; u < V; u++) chuaxet[u] = true;
}
void Graph::addEdge(int v, int w) { //thêm m?t c?nh vào danh sách k?
  adj[v].push_back(w); // thêm w vào list(v)
  adj[w].push_back(v); // thêm v vào list(w)
}
void Graph::Tree_BFS(int u) { //thu?t toán Tree-BFS
  list < int > queue; //t?o hàng d?i r?ng
  //Bu?c 1: Kh?i t?o
  queue.push_back(u); //dua u vào hàng d?i
  chuaxet[u] = false; //thi?t l?p tr?ng thái d?nh u
  list < int > ::iterator t; //t là iterator c?a list
  //Bu?c 2 (l?p):
  while (!queue.empty()) { //l?p d?n khi hàng d?i r?ng
    int s = queue.front(); //l?y s ? d?u hàng d?i
    queue.pop_front(); //lo?i s ra kh?i hàng d?i
    for (t = adj[s].begin(); t != adj[s].end(); ++t) { //duy?t t?list(s)

      if (chuaxet[ * t]) { //n?u d?nh t chua xét
        queue.push_back( * t); //dua t vào hàng d?i
        chuaxet[ * t] = false; //ghi nh?n t dã xét
        T[sc].dau = s;
        T[sc].cuoi = * t; //k?t n?p c?nh (s,t)
        sc++; //tang s? c?nh lên 1
      }
    }
  }
  if (sc < V - 1) cout << "Do thi không liên thông" << endl;
  else {
    cout << "\n Tap canh cây khung:" << endl;
    for (int i = 1; i < sc; i++) cout << T[i].dau << setw(3) << T[i].cuoi << endl;
  }
}
int main(void) {
  ifstream fp("Graph.in"); //m? file d? d?c
  int n, m, dau, cuoi;
  fp >> n >> m; //d?c s? d?nh và s? c?nh c?a d? th?
  Graph gh(n + 1); //thi?t l?p d? th? g?m n d?nh
  for (int i = 1; i <= m; i++) { //chuy?n d? th? sang danh sách k?
    fp >> dau >> cuoi;
    gh.addEdge(dau, cuoi);
  }
  fp.close();
  gh.printGraph();
  gh.Tree_BFS(1);
}
