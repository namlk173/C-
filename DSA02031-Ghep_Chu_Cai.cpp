#include<bits/stdc++.h>
using namespace std;
#define Max 8
int a[Max];
char c;

bool check(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[i]==0 || a[i]== 4){
			if(i!=0 && i!=n-1){
				if((a[i-1]!=0 && a[i-1]!=4) && (a[i+1]!=0 && a[i+1]!=4)) return false;
			}
		}
	}
	return true;
}

int main(){
	cin>>c;
	int n = int(c) - 64;
	for(int i=0; i<n; i++){
		a[i] = i;
	}	
	do{	
		if(check(a, n)){
			for(int i=0; i<n; i++){
				cout<<char(a[i] + 65);
			}
			cout<<endl;
		}
	} while(next_permutation(a, a+n));
	return 0;
}
