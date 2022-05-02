#include<bits/stdc++.h>
using namespace std;
long long a[5];
long long mi;
long long ma;
int main(){
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=1;i<5;i++){
		for(int j=0;j<i;j++){
			if(a[i]<a[j]){
				int tmp = a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	ma = a[1]+a[2]+a[3]+a[4];
	mi = a[1]+a[2]+a[3]+a[0];
	cout<<mi<<" "<<ma;
return 0;
}
