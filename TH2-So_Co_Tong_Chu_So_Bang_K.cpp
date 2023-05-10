// A C++ memoization based recursive program to count
// numbers with sum of n as given 'sum'
#include<bits/stdc++.h>
using namespace std;
unsigned long long int modulo = pow(10,9) + 7;

// A lookup table used for memoization
unsigned long long int lookup[101][50001];

// Memoization based implementation of recursive
// function
unsigned long long int countRec(int n, int sum)
{
	// Base case
	if (n == 0)
	return sum == 0;

	// If this subproblem is already evaluated,
	// return the evaluated value
	if (lookup[n][sum] != -1)
	return lookup[n][sum];

	// Initialize answer
	unsigned long long int ans = 0;

	// Traverse through every digit and
	// recursively count numbers beginning
	// with it
	for (int i=0; i<10; i++)
	if (sum-i >= 0)
		ans = ans%modulo + countRec(n-1, sum-i)%modulo;

	return lookup[n][sum] = ans%modulo;
}

// This is mainly a wrapper over countRec. It
// explicitly handles leading digit and calls
// countRec() for remaining n.
unsigned long long int finalCount(int n, int sum)
{
	// Initialize all entries of lookup table
	memset(lookup, -1, sizeof lookup);

	// Initialize final answer
	unsigned long long int ans = 0;

	// Traverse through every digit from 1 to
	// 9 and count numbers beginning with it
	for (int i = 1; i <= 9; i++)
	if (sum-i >= 0)
		ans += countRec(n-1, sum-i);
	return ans%modulo;
}

// Driver program
int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout << finalCount(n, k)<<endl;
	}
	return 0;
}

