#include <iostream>
#include <fstream>
#define MAX 100

using namespace std;
//H�m t�m d?nh c� kho?ng c�ch nh? nh?t t? V d?n VT
int minKey(int key[], bool mstSet[], int n) {
  int min = INT_MAX, min_index;
  for (int v = 1; v <= n; v++)
    if (mstSet[v] == false && key[v] < min) {
      min = key[v];
      min_index = v;
    }
  return min_index;
}
//x�y d?ng t?p c�y khung c?a d? th? trong parent[]
int printMST(int parent[], int graph[MAX][MAX], int n) {
  printf("Edge Weight\n");
  for (int i = 2; i <= n; i++)
    printf("%d - %d %d \n", parent[i], i, graph[i][parent[i]]);
}
//thu?t to�n x�y d?ng c�y khung nh? nh?t s? d?ng ma tr?n k?
void primMST(int graph[MAX][MAX], int n) {
  int parent[MAX]; // m?ng luu tr? c�c c?nh c�y khung nh? nh?t
  int key[MAX]; // gi� tr? d? l?y c?nh c� d? d�i nh? nh?t
  bool mstSet[MAX]; // t?p d?nh c?a c�y khung & t?p d?nh chua x�t
  int FOPT = 0; //d? d�i nh? nh?t c�y khung
  for (int i = 1; i <= n; i++) { //thi?t l?p gi� tr? nh? nh?t c�c d?nh l� INF
    key[i] = INT_MAX;
    mstSet[i] = false;
  }
  key[1] = 0; // d?nh d?u ti�n l� 1
  parent[1] = -1; //gi� tr? d?u ti�n l?y l� -1
  // C�y khung s? c� V d?nh count: 
  for (int count = 0; count < n - 1; count++) {
    //l?y d?nh u c� key nh? nh?t chua c� trong c�y khung
    int u = minKey(key, mstSet, n);
    mstSet[u] = true; //th�m u v�o t?p d?nh c�y khung
    //c?p nh?t gi� tr? c�c d?nh k? chua c� trong c�y khung
    for (int v = 1; v <= n; v++) {
      if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
        parent[v] = u;
        key[v] = graph[u][v], FOPT = FOPT + key[v];
      }
    }

  }
  //�ua ra c�y khung nh? nh?t
  printf("\n Do dai nho nhat :%d\n", FOPT);
  printMST(parent, graph, n);
}
int main() {
  int n, m, dau, cuoi, w; //n, m: s? d?nh, s? c?nh c?a d? th?; 
  int graph[MAX][MAX]; //ma tr?n k? bi?u di?n d? th?
  ifstream fp("dothi1.in"); //file du?c bi?u di?n du?i d?ng danh s�ch c?nh
  fp >> n >> m; //d?c s? d?nh v� s? c?nh c?a d? th?
  for (int i = 1; i <= m; i++) { //d?c m c?nh ti?p theo
    fp >> dau >> cuoi >> w; //d?c c?nh (dau, cuoi, trongso)
    graph[dau][cuoi] = graph[cuoi][dau] = w;
  }
  fp.close();
  primMST(graph, n);
}
