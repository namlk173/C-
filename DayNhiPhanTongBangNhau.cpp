#include<bits/stdc++.h>
using namespace std;
int t;
int n;
bool a[1000], b[1000];
int longestCommonSum(bool arr1[], bool arr2[], int n)
{

    int maxLen = 0;

    int preSum1 = 0, preSum2 = 0;
    int diff[2*n+1];

    memset(diff, -1, sizeof(diff));

    for (int i=0; i<n; i++)
    {

        preSum1 += arr1[i];
        preSum2 += arr2[i];

        int curr_diff = preSum1 - preSum2;
        int diffIndex = n + curr_diff;

        if (curr_diff == 0)
            maxLen = i+1;

        else if ( diff[diffIndex] == -1)
            diff[diffIndex] = i;

        else
        {

            int len = i - diff[diffIndex];
 
            if (len > maxLen)
                maxLen = len;
        }
    }
    return maxLen;
}

int main()
{	
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n;i++){
			cin>>a[i];
		}
		for(int i =0; i<n;i++){
			cin>>b[i];
		}
		cout<<longestCommonSum(a,b,n)<<endl;
	}
	
    return 0;
}
