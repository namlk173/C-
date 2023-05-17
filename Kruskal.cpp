#include <iostream>
#include <fstream>

using namespace std;
struct Edge { //bi?u di?n c?nh c?a d? th?
  int src; //d?nh d?u c?a c?nh
  int dest; //d?nh cu?i c?a c?nh
  int weight; //tr?ng s? c?a c?nh
};
struct Graph { //bi?u di?n d? th? v� hu?ng
  int V, E; //s? d?nh, s? c?nh c?a d? th?
  Edge * edge; //m?ng luu tr? c�c c?nh c?a d? th?
};
Graph * createGraph(int V, int E) { //t?o l?p d? th? G=<V,E>
  Graph * graph = new Graph; //c?p ph�t mi?n nh? cho d? th?
  graph -> V = V; //thi?t l?p s? d?nh c?a d? th?
  graph -> E = E; //thi?t l?p s? c?nh c?a d? th?
  graph -> edge = new Edge[E]; //c?p ph�t mi?n nh? luu tr? E c?nh
  return graph; //tr? l?i d? th? du?c t?o ra
}
struct subset { //d?nh nghia c?u tr�c d? h?p
  int parent; //node cha
  int rank; //node th? c?p
};
int find(subset subsets[], int i) { //t�m du?ng di d?n d?nh i tr�n subset
  if (subsets[i].parent != i) //n?u parent kh�ng ph?i cha c?a i
    subsets[i].parent = find(subsets, subsets[i].parent); //l?n ti?p t? parent
  return subsets[i].parent; //tr? l?i node cha c?a i
}
void Union(subset subsets[], int x, int y) { // h?p c?nh (x,y)
  int xroot = find(subsets, x);
  int yroot = find(subsets, y);
  if (subsets[xroot].rank < subsets[yroot].rank)
    subsets[xroot].parent = yroot;
  else if (subsets[xroot].rank > subsets[yroot].rank)
    subsets[yroot].parent = xroot;
  else {
    subsets[yroot].parent = xroot;
    subsets[xroot].rank++;
  }
}
void sort(Graph * graph) { //s?p x?p theo th? t? tang d?n tr?ng s? c�c c?nh
  int E = graph -> E - 1;
  for (int i = 1; i < E; i++) {
    for (int j = i + 1; j <= E; j++) {
      if (graph -> edge[i].weight > graph -> edge[j].weight) {
        Edge temp = graph -> edge[i];
        graph -> edge[i] = graph -> edge[j];

        graph -> edge[j] = temp;
      }
    }
  }
}
void KruskalMST(Graph * graph) { //thu?t to�n Kruskal
  int V = graph -> V; //t?p d?nh c?a d? th?
  Edge result[V]; // t?p c?nh c?a c�y khung nh? nh?t
  int e = 1, int i = 1; //s? c?nh c?a c�y khung
  int FOPT = 0; //d? d�i ban d?u c?a c�y khung
  //Bu?c 1. S?p x?p theo th? t? tang d?n tr?ng s? c�c c?nh
  sort(graph);
  subset * subsets = new subset[V]; //c?p ph�t mi?n nh? cho t?p c?nh
  for (int v = 1; v <= V; ++v) { //t?o c�c t?p con c?a v
    subsets[v].parent = v;
    subsets[v].rank = 0;
  }
  //Bu?c 2. L?p khi e< V-1
  while (e < V - 1) {
    Edge next_edge = graph -> edge[i++]; //ch?n c?nh c� d? d�i nh? nh?t
    int x = find(subsets, next_edge.src); //t�m node cha c?a src
    int y = find(subsets, next_edge.dest); //t�m node cha c?a dest
    if (x != y) { //n?u kh�ng t?o n�n chu tr�nh
      result[e++] = next_edge; //th�m c?nh v�o c�y khung
      FOPT = FOPT + next_edge.weight; //d? d�i tang th�m weight
      Union(subsets, x, y); //h?p x, y v�o subset
    }
  }
  //Bu?c 3. Tr? l?i k?t qu?
  if (e < V - 1) {
    cout << "\n Do thi khong lien thong";
  } else {
    cout << "\n Do dai nho nhat:" << FOPT;
    cout << "\n Tap canh cay khung:";
    for (i = 1; i < e; ++i) {
      printf("\n%d%3d%3d", result[i].src, result[i].dest, result[i].weight);

    }
  }
}
int main() {
  int V; // s? d?nh c?a d? th?
  int E; // s? c?nh c?a d? th?
  ifstream fp("dothi.in"); //d?c d? th? du?i d?ng danh s�ch c?nh
  fp >> V >> E;
  printf("\n So dinh do thi:%d", V);
  printf("\n So canh do thi:%d", E);
  Graph * graph = createGraph(V + 1, E + 1); //t?o l?p G=<V,E>
  for (int i = 1; i <= E; i++) {
    fp >> (graph -> edge[i].src);
    fp >> (graph -> edge[i].dest);
    fp >> (graph -> edge[i].weight);
  }
  fp.close();
  KruskalMST(graph);
}
