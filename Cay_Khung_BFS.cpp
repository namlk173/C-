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
class Graph { //x�y d?ng l?p d? th?
  private: int V; // s? d?nh c?a d? th?
  list < int > * adj; // con tr? d?n m?ng c�c danh s�ch k?
  bool * chuaxet; //m?ng chua x�t
  canh * T; //t?p c?nh c?a c�y khung
  int sc; //s? c?nh c?a c�y khung
  public: Graph(int V); // constructor c?a l?p
  void addEdge(int v, int w); // th�m m?t c?nh v�o d? th?
  void Tree_BFS(int u); //thu?t to�n Tree-BFS
  void Tree_DFS(int u); //thu?t to�n Tree-DFS
};
Graph::Graph(int V) { //constructor c?a l?p
  this -> V = V; //thi?t l?p t?p d?nh
  adj = new list < int > [V]; //thi?t l?p V danh s�ch k?
  T = new canh[V];
  sc = 1; //thi?t l?p s? c?nh c�y khung
  chuaxet = new bool[V]; //thi?t l?p gi� tr? m?ng chua x�t
  for (int u = 0; u < V; u++) chuaxet[u] = true;
}
void Graph::addEdge(int v, int w) { //th�m m?t c?nh v�o danh s�ch k?
  adj[v].push_back(w); // th�m w v�o list(v)
  adj[w].push_back(v); // th�m v v�o list(w)
}
void Graph::Tree_BFS(int u) { //thu?t to�n Tree-BFS
  list < int > queue; //t?o h�ng d?i r?ng
  //Bu?c 1: Kh?i t?o
  queue.push_back(u); //dua u v�o h�ng d?i
  chuaxet[u] = false; //thi?t l?p tr?ng th�i d?nh u
  list < int > ::iterator t; //t l� iterator c?a list
  //Bu?c 2 (l?p):
  while (!queue.empty()) { //l?p d?n khi h�ng d?i r?ng
    int s = queue.front(); //l?y s ? d?u h�ng d?i
    queue.pop_front(); //lo?i s ra kh?i h�ng d?i
    for (t = adj[s].begin(); t != adj[s].end(); ++t) { //duy?t t?list(s)

      if (chuaxet[ * t]) { //n?u d?nh t chua x�t
        queue.push_back( * t); //dua t v�o h�ng d?i
        chuaxet[ * t] = false; //ghi nh?n t d� x�t
        T[sc].dau = s;
        T[sc].cuoi = * t; //k?t n?p c?nh (s,t)
        sc++; //tang s? c?nh l�n 1
      }
    }
  }
  if (sc < V - 1) cout << "Do thi kh�ng li�n th�ng" << endl;
  else {
    cout << "\n Tap canh c�y khung:" << endl;
    for (int i = 1; i < sc; i++) cout << T[i].dau << setw(3) << T[i].cuoi << endl;
  }
}
int main(void) {
  ifstream fp("Graph.in"); //m? file d? d?c
  int n, m, dau, cuoi;
  fp >> n >> m; //d?c s? d?nh v� s? c?nh c?a d? th?
  Graph gh(n + 1); //thi?t l?p d? th? g?m n d?nh
  for (int i = 1; i <= m; i++) { //chuy?n d? th? sang danh s�ch k?
    fp >> dau >> cuoi;
    gh.addEdge(dau, cuoi);
  }
  fp.close();
  gh.printGraph();
  gh.Tree_BFS(1);
}
