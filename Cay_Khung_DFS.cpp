#include<iostream>
#include <list>
#include <fstream>
#include <iomanip>
#include <stack>

using namespace std;
struct canh { 
  int dau; 
  int cuoi; 
};
class Graph { 
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
void Graph::Tree_DFS(int u) {
  //Bu?c 1 (Kh?i t?o):
  stack < int > Stack; //t?o l?p stack r?ng
  Stack.push(u); //dua u v�o ngan x?p
  chuaxet[u] = false; //x�c nh?n u d� x�t
  list < int > ::iterator t; //t l� iterator c?a list
  while (!Stack.empty()) { //l?p d?n khi stack r?ng
    int s = Stack.top(); //l?y s l� d?nh d?u ngan x?p
    Stack.pop(); //lo?i s ra kh?i ngan x?p
    for (t = adj[s].begin(); t != adj[s].end(); ++t) { //duy?t tr�n list(s)
      if (chuaxet[ * t]) { //n?u d�ng t chua x�t
        Stack.push(s); //dua s v�o stack tru?c
        Stack.push( * t); //dua t v�o stack sau
        chuaxet[ * t] = false; //ghi nh?n t d� x�t
        T[sc].dau = s;
        T[sc].cuoi = * t; //th�m (s,t) v�o c�y
        sc++; //tang s? c?nh l�n 1
        break; //ch? l?y d?nh d?u ti�n
      }
    }
  }
  if (sc < V - 1) { //n?u |T|<n-1
    cout << "\n Do thi khong lien thong";
  } else {
    cout << "\n Tap canh cay khung:" << endl;
    for (int i = 1; i < sc; i++) {
      cout << T[i].dau << setw(3) << T[i].cuoi << endl;
    }
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
