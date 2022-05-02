#include <bits/stdc++.h>
using namespace std;
int t;
int n;
int arr[21];
int generateAllBinaryStrings(int n, int arr[], int i)
{
    if (i == n) {
    	for(int i =0; i<n;i++){
    		cout<<arr[i];
		}
		cout<<" "; 
        return 0;
    }
    
    arr[i] = 0;
    generateAllBinaryStrings(n, arr, i + 1);
    
    arr[i] = 1;
    generateAllBinaryStrings(n, arr, i + 1);
}
 
int main()
{
	cin>>t;
	while(t--){
	cin>>n;
    generateAllBinaryStrings(n, arr, 0);
    cout<<endl;
	}

    return 0;
}
