#include<bits/stdc++.h>
using namespace std;

#define Max 100
int a[Max], n, k;
vector<string> name_unique;

void Print(int a[], int n){
	for(int i=1; i<=n; i++){
		cout<<name_unique[a[i]-1]<<" ";
	}
	cout<<endl;
}

void Try(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i] = j;
		if(i==k){
			Print(a, k);
		}else{
			Try(i+1);
		}
	}
}

int main(){
	cin>>n>>k;
	cin.ignore();
	string temp;
	set<string> name;
	for(int i=0; i<n; i++){
		cin>>temp;
		name.insert(temp);
	}
	set<string>::iterator itr;
	name_unique.clear();
	for(itr=name.begin(); itr!=name.end(); itr++){
		name_unique.push_back(*itr);
	}
	n=name_unique.size();	
	a[0] = 0;
	Try(1);
	return 0;
}
