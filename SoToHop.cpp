#include <bits/stdc++.h>
using namespace std;
int t;
int n;
int r;
#define m 1000000007;
int nCrModp(int n, int r)
{

    if (r > n - r)
        r = n - r;
    int C[r + 1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1; 

    for (int i = 1; i <= n; i++) {

        for (int j = min(i, r); j > 0; j--){
   			C[j] = C[j]%m;
            C[j] = (C[j] + C[j - 1]) %m;     	
		}

    }
    return C[r];
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>r;
		cout<<nCrModp(n,r)<<endl;
	}
    return 0;
}
