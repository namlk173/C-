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
	public:
		string getngaysinh(){
			return ngaysinh;
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
bool compare(NhanVien nv1, NhanVien nv2){
	string s1 = nv1.getngaysinh();
	string s2 = nv2.getngaysinh();
	string a = s1.substr(6,4);
	string b = s2.substr(6,4);
	if(a<b){
		return 1;
	}
	else if(a==b){
		string a1 = s1.substr(0,2);
		string b1 = s2.substr(0,2);
		if(a1<b1){
			return 1;
		}
		else if(a1==b1){
			string a2 = s1.substr(3,2);
			string b2 = s2.substr(3,2);
			if(a2<b2){
				return 1;
			}
			else{
				return 0;
			}
		}
	}
	return 0;
}
void sapxep(NhanVien nv[], int n){
	sort(nv,nv+n,compare);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
