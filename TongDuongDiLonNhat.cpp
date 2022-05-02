#include <bits/stdc++.h>
using namespace std;
int t;
int n,m,a[10000],b[10000];
int max(int x, int y) { return (x > y) ? x : y; }
int maxPathSum(int ar1[], int ar2[], int m, int n)
{
    int i = 0, j = 0;
    int result = 0, sum1 = 0, sum2 = 0;
    while (i < m && j < n)
    {
        if (ar1[i] < ar2[j])
            sum1 += ar1[i++];

        else if (ar1[i] > ar2[j])
            sum2 += ar2[j++];
        else 
        {
            result += max(sum1, sum2) + ar1[i];
            sum1 = 0;
            sum2 = 0;
            i++;
            j++;
        }
    }
    while (i < m)
        sum1 += ar1[i++];

    while (j < n)
    sum2 += ar2[j++];
    result += max(sum1, sum2);
    return result;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		for(int i =0; i<m; i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		cout<<maxPathSum(a,b,n,m);
		cout<<endl;
	}
return 0;
}
