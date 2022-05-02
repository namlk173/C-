#include<bits/stdc++.h>
using namespace std;
int t;
char a[100];
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>a;
		for(int i =0; i<strlen(a); i++){
			int j = i+1;
			int count =1;
			while(a[i]==a[j]){
				count++;
				j++;
			}
			cout<<a[i]<<count;
			i=j-1;
		}
		cout<<endl;
	}
	return 0;
}
