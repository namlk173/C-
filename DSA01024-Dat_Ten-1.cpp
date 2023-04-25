#include<bits/stdc++.h>
using namespace std;
#define Max 100
bool OK = true;
int a[Max];

void Init(int k){
	for(int i=0; i<k; i++){
		a[i] = i+1;
	}
}

void in(int a[], int k, vector<string> unique_name){
	for(int i=0; i<k; i++){
		cout<<unique_name[a[i]-1]<<" ";
	}
	cout<<endl;
}

void sinh(int a[], int n, int k){
	int i = k-1;
	while(i>=0 && a[i]==n-k+i+1){
		i--;
	}
	if(i>=0){
		a[i] = a[i] + 1;
		for(int j=i+1; j<k; j++){
			a[j] = a[i] + j - i;
		}
	} else{
		OK = false;
	}
}

int main(){
	int n, k;
	cin>>n>>k;
	cin.ignore();
	set<string> name;
	vector<string> unique_name;
	string s;
	for(int i=0; i<n; i++){
		cin>>s;
		name.insert(s);
	}
	set<string>::iterator itr;
	for(itr = name.begin(); itr != name.end(); itr++){
		unique_name.push_back(*itr);
	}
	Init(k);
	OK = true;
	while(OK){
		in(a, k, unique_name);
		sinh(a, unique_name.size(), k);
	}
	return 0;
}
