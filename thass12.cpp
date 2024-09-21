#include<bits/stdc++.h>
using namespace std;

class phieu;
class ncc{
	private:
		char mancc[20];
		char tenncc[20];
		char dc[20];
		int sdt;
	public:
		void nhap();
		void xuat();
};

class sp{
	private:
		char masp[20];
		char tensp[20];
		int sl;
		int dg;
	public:
		void nhap();
		void xuat();
		friend class phieu;
		friend void bonus1(phieu &p);
};

class phieu{
	private:
		ncc a;
		sp b[20];
		char map[20];
		char ngay[20];
		int n;
	public:
		void nhap();
		void xuat();
		friend void bonus1(phieu &p);
};

void ncc::nhap(){
	cout<<"ma ncc: "; fflush(stdin); gets(mancc);
	cout<<"ten ncc: "; fflush(stdin); gets(tenncc);
	cout<<"dia chi: "; fflush(stdin); gets(dc);
	cout<<"sdt: "; cin>>sdt;
}

void ncc::xuat(){
	cout<<"ma ncc: "
	<<setw(15)<<mancc
	<<setw(15)<<"ten ncc: "
	<<setw(15)<<tenncc
	<<setw(15)<<"dia chi: "
	<<setw(15)<<dc
	<<setw(15)<<"sdt"
	<<setw(15)<<sdt<<endl;
}

void sp::nhap(){
	cout<<"ma sp: "; fflush(stdin); gets(masp);
	cout<<"ten sp: "; fflush(stdin); gets(tensp);
	cout<<"so luong: "; cin>>sl;
	cout<<"don gia: "; cin>>dg;
}

void sp::xuat(){
	cout<<masp		
		<<setw(15)<<tensp		
		<<setw(15)<<sl		
		<<setw(15)<<dg
		<<setw(15)<<sl*dg<<endl;		
}

void phieu::nhap(){
	cout<<"ma phieu: "; fflush(stdin); gets(map);
	cout<<"ngay lap: "; fflush(stdin); gets(ngay);
	a.nhap();
	cout<<"so luong san pham= "; cin>>n;
	for(int i=0; i<n; i++){
		b[i].nhap();
	}
	
}

void phieu::xuat(){
	cout<<"ma phieu: "
		<<setw(15)<<map
		<<setw(15)<<"ngay lap: "
		<<setw(15)<<ngay<<endl;
		a.xuat();
			cout<<"ma sp"
				<<setw(15)<<"ten sp"
				<<setw(15)<<"so luong"
				<<setw(15)<<"don gia"
				<<setw(15)<<"thanh tien"<<endl;
		for(int i=0; i<n; i++){
			b[i].xuat();
		}
		int tong=0;
		for(int i=0; i<n; i++){
			tong+=b[i].sl*b[i].dg;
		}
		cout<<setw(45)<<"tong"<<setw(15)<<tong<<endl;
}

void bonus1(phieu &p){
	int dem=0;
	for(int i=0; i<p.n; i++){
		if(p.b[i].sl<80){
			dem++;			
		}cout<<"co "<<dem<<"san pham sl < 80"<<endl;
	}if(dem==0) cout<<"khong co sp sl <80"<<endl;
}

main(){
	phieu p;
	p.nhap();
	p.xuat();
	bonus1(p);
}


/*
ph01
4/6
ncc1
cty
hn
091212
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
