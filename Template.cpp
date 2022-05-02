#include<bits/stdc++.h>
using namespace std;
template< class T>
T max(T a, T b){
	return a;
}
int main(){
	T a= 5, b =10;
	cout<<max(&a,&b);
	return 0;
}
