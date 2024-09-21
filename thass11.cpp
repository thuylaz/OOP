#include<bits/stdc++.h>
using namespace std;

class phieu;
class ncc{
	private:
		char mancc[20],tenncc[20], dc[20];
		int sdt;
	public:
		void nhap();
		void xuat();
};

class hang{
	private:
		char masp[20], tensp[20];
		int sl,dg;
	public:
		void nhap();
		void xuat();
		friend class phieu;
		friend void bonus1(phieu p);
		friend void bonus2(phieu &p);
};

class phieu{
	private:
		char map[20], ngay[20];
		int n;
		ncc a;
		hang b[20];
	public:
		void nhap();
		void xuat();
		friend void bonus1(phieu p);
		friend void bonus2(phieu &p);
};

void ncc::nhap(){
	cout<<"ma ncc: "; fflush(stdin); gets(mancc);
	cout<<"ten ncc: "; fflush(stdin); gets(tenncc);
	cout<<"dia chi: "; fflush(stdin); gets(dc);
	cout<<"sdt: "; cin>>sdt;
}

void ncc::xuat(){
	cout<<"ma ncc: "<<mancc
		<<setw(14)<<"ten ncc: "<<tenncc
		<<setw(14)<<"dia chi: "<<dc
		<<setw(14)<<"sdt: "<<sdt<<endl;
}

void hang::nhap(){
	cout<<"ma sp: "; fflush(stdin); gets(masp);
	cout<<"ten sp: "; fflush(stdin); gets(tensp);
	cout<<"so luong: "; cin>>sl;
	cout<<"don gia: "; cin>>dg;
}

void hang::xuat(){
	cout<<masp
		<<setw(14)<<tensp
		<<setw(14)<<sl
		<<setw(14)<<dg
		<<setw(14)<<sl*dg<<endl;
		
		
}

void phieu::nhap(){
	cout<<"ma phieu: "; fflush(stdin); gets(map);
	cout<<"ngay lap: "; fflush(stdin); gets(ngay);
	a.nhap();
	cout<<"n= "; cin>>n;
	for(int i=0; i<n; i++){
		b[i].nhap();
	}
}

void phieu::xuat(){
	cout<<"ma phieu: "<<map
		<<setw(14)<<"ngay lap: "<<ngay<<endl;
	a.xuat();
	cout<<"ma sp"
		<<setw(14)<<"ten sp"
		<<setw(14)<<"so luong"
		<<setw(14)<<"don gia"
		<<setw(14)<<"thanh tien"<<endl;
	for(int i=0; i<n; i++){
		b[i].xuat();
	}
	
	int tong=0;
	for(int i=0; i<n; i++){
		tong+=b[i].sl*b[i].dg;
	}
	cout<<"tong: "<<setw(53)<<tong;
}

void bonus1(phieu p){
	int dem=0;
	for(int i=0; i<p.n; i++){
		if(p.b[i].sl<80){
			dem++;
		}
	}
	if(dem==0) cout<<"khong co san pham co sl <80";
	else cout<<dem;
}

void bonus2(phieu &p){
	for(int i=0; i<p.n-1; i++){
		for(int j=i+1; j<p.n; j++){
			if(p.b[i].dg>p.b[j].dg){
				swap(p.b[i],p.b[j]);
			}
		}
	}
}

main(){
	phieu p;
	p.nhap();
	p.xuat();
	cout<<endl<<"so san pham co so luong >80 la: ";
	bonus1(p);
	cout<<endl;
	bonus2(p);
	p.xuat();
}

/*
ph01
4/6/2018
ncc1
cty
hanoi
09122121
3
sp1
giay
100
70
sp2
but
50
10
sp3
tui
60
5

*/
