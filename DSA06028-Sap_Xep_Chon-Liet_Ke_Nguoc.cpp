#include<bits/stdc++.h>
using namespace std;

void inArr(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n;

		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int step[n-1][n];
		for(int i=0; i<n-1; i++){
			int index = i;
			for(int j=i+1; j<n; j++){
				if(a[j]<a[index]) {
					index = j; 
				}
			}
			swap(a[i], a[index]);
			for(int k=0; k<n; k++){
				step[i][k] = a[k];
			}
		} 
		for(int i=n-2; i>=0; i--){
			cout<<"Buoc "<<i+1<<": ";
			inArr(step[i], n);
		}

	return 0;
} 
