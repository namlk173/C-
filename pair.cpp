#include <bits/stdc++.h>
using namespace std;
int n;
int a[100];
int result[100];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		result[a[i]]++;
	}
	int pair = 0;
	for(int i=0;i<101;i++){
		pair+=result[i]/2;
	}
	cout<<pair;
	return 0;
}
