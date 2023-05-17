#include <iostream>
#include <fstream>
#define MAX 100

using namespace std;
//hàm tìm d?nh có nhãn nh? nh?t
int minDistance(int dist[], bool sptSet[], int n) {
  // thi?t l?p nhãn nh? nh?t ban d?u
  int min = INT_MAX, min_index;
  for (int v = 1; v <= n; v++) {
    if (sptSet[v] == false && dist[v] <= min) {
      min = dist[v];
      min_index = v;
    }
  }
  return min_index; //d?nh có nhãn nh? nh?t
}
// hàm in ra d? dài du?ng di ng?n nh?t
int printSolution(int dist[], int n) {
  printf("Duong di ngan nhat: \n");
  for (int i = 1; i <= n; i++)
    printf("%d \t\t %d\n", i, dist[i]);
}

// thu?t toán Dijkstra s? d?ng ma tr?n k?
void dijkstra(int graph[MAX][MAX], int src, int n) {
  int dist[MAX]; // dist[i] s? là d? dài du?ng di ng?n nh?t t? src d?n i 
  bool sptSet[MAX]; //luu tr? du?ng di ng?n nh?t t? src d?n i
  //Bu?c 1 (kh?i t?o): thi?t l?p t?t c? d? dài là INF.
  for (int i = 1; i <= n; i++) {
    dist[i] = INT_MAX;
    sptSet[i] = false;
  }
  dist[src] = 0; //nhãn d?nh xu?t phát l?y là 0

  //Bu?c 2(l?p): tìm du?ng di ng?n nh?t t? src d?n t?t c? các d?nh
  for (int count = 1; count <= n - 1; count++) { //l?p trên t?p d?nh V
    int u = minDistance(dist, sptSet, n); //l?y u là d?nh có nhãn nh? nh?t
    sptSet[u] = true; //dánh d?u d?nh u dã là du?ng di ng?n nh?t
    // c?p nh?t nhãn các d?nh còn l?i
    for (int v = 1; v <= n; v++) {
      if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX &&
        dist[u] + graph[u][v] < dist[v])
        dist[v] = dist[u] + graph[u][v];

    }
  }
  printSolution(dist, n); // in ra du?ng di ng?n nh?t
}
int main() {
  int n, m, dau, cuoi, trongso; //khai báo s? d?nh và s? c?nh: n, m
  int graph[MAX][MAX]; //ma tr?n k? bi?u di?n d? th?
  ifstream fp("dothiw.in"); //file bi?u di?n d? th? du?i d?ng danh sách c?nh
  fp >> n >> m; //d?c s? c?nh và s? d?nh c?a d? th?
  for (int i = 1; i <= m; i++) { //d?c m c?nh: (dau, cuoi, trongso)
    fp >> dau >> cuoi >> trongso;
    graph[dau][cuoi] = trongso;
    graph[cuoi][dau] = trongso; //b? di n?u là d? th? có hu?ng
  }
  fp.close();
  dijkstra(graph, 1, 9);
}
