#include<bits/stdc++.h>
using namespace std;
int t;
int n,m;
int A11[1000000];
int k =0;
void SapXep(int A1[], int n, int A2[], int m){
		sort(A1,A1+n);
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			if(A1[j]==A2[i]){
				A11[k++] = A2[i]; 
			}
		}
	}
	bool flag = 0;
	int index = k;
	for(int i = 0; i< n;i++){
		flag = 0;
		for(int j = 0; j <k; j++){
			if(A1[i]==A11[j]){
			flag = 1;
			break;	
			}
		}
		if(flag == 0) A11[index++] = A1[i];	
	}
	for(int i = 0; i<index; i++){
		cout<<A11[i]<<" ";
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		int A1[n+1], A2[m+1];
		for(int i= 0; i<n; i++){
			cin>>A1[i];
		}
		for(int i= 0; i<m; i++){
			cin>>A2[i];
		}
		SapXep(A1, n, A2, m);
		cout<<endl; 
	}
	return 0;
}

