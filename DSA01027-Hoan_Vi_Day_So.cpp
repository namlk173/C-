#include<bits/stdc++.h>
using namespace std;
#define Max 10000
int a[Max];
bool OK;

void in(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sinh_hoan_vi(int a[], int n){
	int j = n-2;
	while(j>=0 && a[j] > a[j+1]){
		j--;
	}
	if(j>=0){
		int k = n-1;
		while(a[j] > a[k]){
			k--;
		}
		swap(a[j], a[k]);
		int r = j +1, s = n-1;
		while(r<=s){
			swap(a[r], a[s]);
			r++;
			s--;
		}
	} else {
		OK = false;
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	OK = true;
	while(OK){
		in(a, n);
		sinh_hoan_vi(a, n);
	}
	return 0;
}
