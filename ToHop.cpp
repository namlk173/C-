#include<bits/stdc++.h>
using namespace std;
int t,n,r; 
int a[20];
void combinationUtil(int arr[], int data[], int start, int end, int index, int r);
void printCombination(int arr[], int n, int r)
{
    int data[r];
    combinationUtil(arr, data, 0, n-1, 0, r);
}
void combinationUtil(int arr[], int data[], int start, int end, int index, int r)
{

    if (index == r)
    {
        for (int j = 0; j < r; j++)
            cout << data[j];
            cout<<" ";
        return;
    }
    for (int i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}

int main()
{
cin>>t;
while(t--){
	cin>>n>>r;
	for(int i =0; i<n;i++){
		a[i]=i+1;
	}
	printCombination(a,n,r);
	cout<<endl;
	}
}
