#include<bits/stdc++.h>
using namespace std;
int a[100000];
int n;
int Max;
int Count;
int main(){
cin>>n;
for(int i=0;i<n;i++){
	cin>>a[i];
}
Max= a[0];
for(int i=1;i<n;i++){
Max = max(Max,a[i]);
}
for(int i=0;i<n;i++){
if(a[i]==Max) Count++;
}
cout<<Count;
return 0;
}
