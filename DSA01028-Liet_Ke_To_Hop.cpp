#include<bits/stdc++.h>
using namespace std;
#define Max 100
int to_hop[Max];
bool OK = true;

void Init(int k){
	for(int i=0; i<k; i++){
		to_hop[i] = i;
	}
}

void in(int to_hop[], int n, int a[]){
	for(int i=0; i<n; i++){
		cout<<a[to_hop[i]]<<" ";
	}
	cout<<endl;
}

void sinh_to_hop_ke_tiep(int to_hop[], int n, int k){
	int i=k-1;
	while(i>=0 && to_hop[i]==n-k+i){
		i--;
	}
	if(i>=0){
		to_hop[i] = to_hop[i] + 1;
		for(int j=i+1; j<k; j++){
			to_hop[j] = to_hop[i] + j - i;
		}
	} else {
		OK = false;
	}
	return;
}

int main(){
	int n, k, x;
	cin>>n>>k;
	set<int> arr;
	for(int i=0; i<n; i++){
		cin>>x;
		arr.insert(x);
	}
	int a[arr.size()];
	set<int>::iterator itr;
	int i=0;
	for(itr=arr.begin(); itr != arr.end(); itr++){
		a[i++] = *itr;
	}
	Init(k);
	while(OK){
		in(to_hop, k, a);
		sinh_to_hop_ke_tiep(to_hop, arr.size(), k);
	}
	return 0;
}
