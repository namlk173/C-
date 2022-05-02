#include<bits/stdc++.h>
using namespace std;
int z = 0 ;
class NhanVien{
	string hoten;
	string gioitinh;
	string ngaysinh;
	string diachi;
	string masothue;
	string ngaykihd;
	int manv;
	public:
		NhanVien(){
			++manv;
			hoten = "";
			gioitinh ="";
			ngaysinh="";
			diachi="";
			masothue="";
			ngaykihd="";
		}
friend istream &operator >>(istream &input, NhanVien &nv){
	nv.manv = ++z;
	if(nv.manv ==1){
		input.ignore();
	}
	getline(input,nv.hoten);
	getline(input,nv.gioitinh);
	getline(input,nv.ngaysinh);
	getline(input,nv.diachi);
	getline(input,nv.masothue);
	getline(input,nv.ngaykihd);
	return input;
}
friend ostream &operator <<(ostream &output, NhanVien &nv){
	output<<right<<setw(5)<<setfill('0')<<nv.manv<<" "<<nv.hoten<<" "
	<<nv.gioitinh<<" "<<nv.ngaysinh<<" "<<nv.diachi<<" "
	<<nv.masothue<<" "<<nv.ngaykihd<<endl;
	return output;
}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
