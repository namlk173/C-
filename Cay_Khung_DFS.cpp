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
void Graph::Tree_DFS(int u) {
  //Bu?c 1 (Kh?i t?o):
  stack < int > Stack; //t?o l?p stack r?ng
  Stack.push(u); //dua u vào ngan x?p
  chuaxet[u] = false; //xác nh?n u dã xét
  list < int > ::iterator t; //t là iterator c?a list
  while (!Stack.empty()) { //l?p d?n khi stack r?ng
    int s = Stack.top(); //l?y s là d?nh d?u ngan x?p
    Stack.pop(); //lo?i s ra kh?i ngan x?p
    for (t = adj[s].begin(); t != adj[s].end(); ++t) { //duy?t trên list(s)
      if (chuaxet[ * t]) { //n?u dúng t chua xét
        Stack.push(s); //dua s vào stack tru?c
        Stack.push( * t); //dua t vào stack sau
        chuaxet[ * t] = false; //ghi nh?n t dã xét
        T[sc].dau = s;
        T[sc].cuoi = * t; //thêm (s,t) vào cây
        sc++; //tang s? c?nh lên 1
        break; //ch? l?y d?nh d?u tiên
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
