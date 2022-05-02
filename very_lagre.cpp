#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b)
{
    if (a==0)
       return b;
    return gcd(b%a,a);
}

ll reduceB(ll a, char b[])
{

    ll mod = 0;
 
    for (int i=0; i<strlen(b); i++)
        mod = (mod*10 + b[i] - '0')%a;
 
    return mod; 
}

ll gcdLarge(ll a, char b[])
{

    ll num = reduceB(a, b);
 
    return gcd(a, num);
}
 

int main()
{
	ll a;
	cin>>a;
	char b[250];
	cin>>b;
    if (a == 0)
        cout << b<<2;
    else
        cout << gcdLarge(a, b);
 
    return 0;
}
