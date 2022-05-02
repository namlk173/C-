#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;
int positive,negative,zezo;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>0) positive++;
		else if(a[i]<0) negative++;
		else zezo++;
	}
	cout<<fixed<<setprecision(6)<< float(positive)/n<<endl;
	cout<<fixed<<setprecision(6)<< float(negative)/n<<endl;
	cout<<fixed<<setprecision(6)<< float(zezo)/n;
	return 0;
}
