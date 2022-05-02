#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string hoTen;
	char ngaySinh[20];
	float diem1,diem2,diem3;
};
void nhap(ThiSinh &A){
	getline(cin,A.hoTen);
	cin>>A.ngaySinh;
	cin>>A.diem1;
	cin>>A.diem2;
	cin>>A.diem3;
}
void in(ThiSinh A){
	cout<<A.hoTen<<" "<<A.ngaySinh<<" ";
	cout<<fixed<<setprecision(1)<<A.diem1 + A.diem2 + A.diem3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
