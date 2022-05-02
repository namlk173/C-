#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mulmod(ll a,ll b,ll c)
{

    if (b==0)
        return 0;

    ll s = mulmod(a, b/2, c);

    if (b%2==1)
        return (a%c+2*(s%c)) % c;
    else
        return (2*(s%c)) % c;
}
int main()
{
int  t;
ll a,b,c;
cin>>t;
while(t--){
	cin>>a>>b>>c;
	cout<<mulmod(a,b,c)<<endl;
}
    return 0;
}
