// solution for 0-1 Knapsack problem
#include <bits/stdc++.h>
using namespace std;
 
// A utility function that returns
// maximum of two integers
int max(int a, int b) { return (a > b) ? a : b; }
 
// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n+1][W+1]; 
 
    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1]
                                  + K[i - 1][w - wt[i - 1]],
                              K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
//    for(int i=0; i<n+1; i++){
//    	for(int j=0; j<w+1; j++){
//    		cout<<K[i][j]<<" ";
//    	}
//    	cout<<endl;
//    }
    return K[n][W];
}
 
// Driver Code
int main()
{
	int t, n, W;
	cin>>t;
	while(t--){
		cin>>n>>W;
		int a[n], c[n]; 
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<n; i++){
			cin>>c[i];
		}
		cout<<knapSack(W, a, c, n)<<endl;
	} 
//    int profit[] = { 60, 100, 120 };
//    int weight[] = { 10, 20, 30 };
//    int W = 50;
//    int n = sizeof(profit) / sizeof(profit[0]);
// 
//    cout << knapSack(W, weight, profit, n);
// 
    return 0;
}
