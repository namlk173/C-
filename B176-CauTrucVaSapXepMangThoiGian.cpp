#include<bits/stdc++.h>
using namespace std;
int n;
struct ThoiGian{
	int gio,phut,giay;
};
void NhapTg(ThoiGian &t){
	cin>>t.gio>>t.phut>>t.giay;
}
void InTg(ThoiGian t[],int n){
	for(int i =0; i<n; i++){
		cout<<t[i].gio<<" "<<t[i].phut<<" "<<t[i].giay<<endl;		
	}
	
}
void SapXepTg(ThoiGian t[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1; j<n; j++){
			if(t[i].gio > t[j].gio){
				swap(t[i],t[j]);
			}
			else if(t[i].gio == t[j].gio){
				if(t[i].phut > t[j].phut){
					swap(t[i],t[j]);
				}
				else if(t[i].phut == t[j].phut){
					if(t[i].giay > t[j].giay){
						swap(t[i],t[j]);
					}
				}
			}
		}
	}
}
int main(){
	cin>>n;
	struct  ThoiGian tg[n];
	for(int i =0; i<n; i++){
		NhapTg(tg[i]);
	}
	SapXepTg(tg,n);
	InTg(tg,n);
	return 0;
}
