#include<bits/stdc++.h>
using namespace std;
#define Max 100
int t, n, p, s;
int mark[Max];
int numbers;
vector<vector<int> > res; 
bool OK;

void Init(int n){
	numbers = 0;
	res.clear();
	for(int i=0; i<n; i++){
		mark[i] = i;
	}
}

void In(vector<int> primes, int mark[], int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum = sum + primes[mark[i]];
	}
	if(sum==s){
		numbers = numbers + 1;
		vector<int> temp;
		for(int i=0; i<n; i++){
			temp.push_back(primes[mark[i]]);	
		}
		res.push_back(temp);
	}
	return;
}

bool is_prime(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	int x = sqrt(n);
	for(int i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void sinh_to_hop(int n, int k){
	int i=k-1;
	while(i>=0 && mark[i]==n-k+i){
		i--;
	}
	if(i>=0) {
		mark[i] = mark[i] + 1;
		for(int j=i+1; j<k; j++){
			mark[j] = mark[i] + j - i;
		}
	}
	else {
		OK = false;
	}
}

int main(){
	cin>>t;
	while(t--){
		cin>>n>>p>>s;
		vector<int> primes;
		for(int i=p; i<s; i++){
			if(is_prime(i)) primes.push_back(i);
		}
		if(n>primes.size()){
			cout<<"0"<<endl;
			continue;
		}
		Init(n);
		OK = true;
		while(OK){
			In(primes, mark, n);
			sinh_to_hop(primes.size(), n);
		}
		cout<<numbers;
		cout<<endl;
		for(int i=0; i<numbers; i++){
			for(int j=0; j<n; j++){
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}

