#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int> > adjacency_list(n);
  for (int i = 0; i < n; i++) {
    for (int neighbor : cin >> ws) {
      adjacency_list[i].push_back(neighbor - 1);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int neighbor : adjacency_list[i]) {
      if (i < neighbor) {
        cout << i + 1 << " " << neighbor + 1 << endl;
      }
    }
  }

  return 0;
}
