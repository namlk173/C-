#include<bits/stdc++.h>
using namespace std;
int x=1,y=1,z=1;
class KhachHang;
class MatHang;
vector<KhachHang>KH;
vector<MatHang>MH;
class KhachHang{
	public:
		string makh;
		int ma;
		string tenkh;
		string gioitinh;
		string ngaysinh;
		string diachi;
	public:
		friend class HoaDon;
		KhachHang(){		
			makh = "KH";
			}
		
	friend istream &operator >>(istream &input, KhachHang &kh){
		kh.ma = x++;
		getline(input,kh.tenkh);
		input>>kh.gioitinh>>kh.ngaysinh;
		getline(input,kh.diachi);
		KH.push_back(kh);
		return input;
	}
};
class MatHang{
	private:
		string mamh;
		int ma;
		string tenmh;
		string dvtinh;
		int giamua;
		int giaban;
	public: 
		friend class HoaDon;
		MatHang(){}
		MatHang(char ten, char dv, int gb, int gm){
			mamh = "MH";
			ma = y++;
			tenmh = ten;
			dvtinh = dv;
			giaban = gb;
			giamua = gm; 
		}
		
	friend istream &operator >>(istream &input, MatHang &mh){
		getline(input,mh.tenmh);
		getline(input,mh.dvtinh);
		input>>mh.giamua>>mh.giaban;
		MH.push_back(mh);
		return input;
	}
	
};
class HoaDon{
	private:
		string mahd;
		int ma;
		string makh;
		string mamh;
		int soluong;
	public:
		friend class KhachHang;	
	friend istream &operator>>(istream &input, HoaDon hd){
		hd.ma = z++;
		input>>hd.makh;
		input>>hd.mamh;
		input>>hd.soluong;
		return input;
	}
	friend ostream &operator<<(ostream &output, HoaDon hd){
		int a,b;
		istringstream isa(hd.makh.substr(2,4));
		istringstream isb(hd.mamh.substr(2,4) );
		isa>>a;
		isb>>b;
		
		output<<"HD"<<right<<setw(3)<<setfill('0')<<hd.ma;
		for(int i =0; i<KH.size(); i++){
			if(a==KH[i].ma){
				output<<KH[i].tenkh;
			}
		}
	}
	
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    cin.ignore();
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    cin.ignore();
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    cin.ignore();
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
