#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int t;
char a[1000];
ll b,m;
ll power(ll x, ll y, ll p)
{
	
    ll res = 1; 

    x = x % p;
    while (y > 0) {

        if (y & 1)
            res = (res * x) % p;
        y = y >> 1; 
        x = (x * x) % p;
    }
    return res;
}
int main(){
	cin>>t;
	while(t--){
		cin>>a;
		cin>>b>>m;
		int n = strlen(a);
		ll mod = 0;
		for(int i =0; i<n; i++){
			mod= (mod*10+ (a[i]-'0'))%m;
		}
	cout<<power(mod,b,m)<<endl;
	}
	return 0;
}
