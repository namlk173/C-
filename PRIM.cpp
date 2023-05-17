#include <iostream>
#include <fstream>
#define MAX 100

using namespace std;
//Hàm tìm d?nh có kho?ng cách nh? nh?t t? V d?n VT
int minKey(int key[], bool mstSet[], int n) {
  int min = INT_MAX, min_index;
  for (int v = 1; v <= n; v++)
    if (mstSet[v] == false && key[v] < min) {
      min = key[v];
      min_index = v;
    }
  return min_index;
}
//xây d?ng t?p cây khung c?a d? th? trong parent[]
int printMST(int parent[], int graph[MAX][MAX], int n) {
  printf("Edge Weight\n");
  for (int i = 2; i <= n; i++)
    printf("%d - %d %d \n", parent[i], i, graph[i][parent[i]]);
}
//thu?t toán xây d?ng cây khung nh? nh?t s? d?ng ma tr?n k?
void primMST(int graph[MAX][MAX], int n) {
  int parent[MAX]; // m?ng luu tr? các c?nh cây khung nh? nh?t
  int key[MAX]; // giá tr? d? l?y c?nh có d? dài nh? nh?t
  bool mstSet[MAX]; // t?p d?nh c?a cây khung & t?p d?nh chua xét
  int FOPT = 0; //d? dài nh? nh?t cây khung
  for (int i = 1; i <= n; i++) { //thi?t l?p giá tr? nh? nh?t các d?nh là INF
    key[i] = INT_MAX;
    mstSet[i] = false;
  }
  key[1] = 0; // d?nh d?u tiên là 1
  parent[1] = -1; //giá tr? d?u tiên l?y là -1
  // Cây khung s? có V d?nh count: 
  for (int count = 0; count < n - 1; count++) {
    //l?y d?nh u có key nh? nh?t chua có trong cây khung
    int u = minKey(key, mstSet, n);
    mstSet[u] = true; //thêm u vào t?p d?nh cây khung
    //c?p nh?t giá tr? các d?nh k? chua có trong cây khung
    for (int v = 1; v <= n; v++) {
      if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
        parent[v] = u;
        key[v] = graph[u][v], FOPT = FOPT + key[v];
      }
    }

  }
  //Ðua ra cây khung nh? nh?t
  printf("\n Do dai nho nhat :%d\n", FOPT);
  printMST(parent, graph, n);
}
int main() {
  int n, m, dau, cuoi, w; //n, m: s? d?nh, s? c?nh c?a d? th?; 
  int graph[MAX][MAX]; //ma tr?n k? bi?u di?n d? th?
  ifstream fp("dothi1.in"); //file du?c bi?u di?n du?i d?ng danh sách c?nh
  fp >> n >> m; //d?c s? d?nh và s? c?nh c?a d? th?
  for (int i = 1; i <= m; i++) { //d?c m c?nh ti?p theo
    fp >> dau >> cuoi >> w; //d?c c?nh (dau, cuoi, trongso)
    graph[dau][cuoi] = graph[cuoi][dau] = w;
  }
  fp.close();
  primMST(graph, n);
}
