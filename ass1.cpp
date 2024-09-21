#include<bits/stdc++.h>
using namespace std;

class phieu;
class ncc{
	private:
		char mancc[20];
		char tenncc[20];
		char dc[30];
		int sdt;
	public:
		void nhap();
		void xuat();
};

class sp{
	private:
		char masp[20];
		char tensp[30];
		int sl;
		int dongia;
	public:
		void nhap();
		void xuat();
		friend class phieu;
		friend void cau1(phieu t);
		friend void cau2(phieu &t);
};

class phieu{
	private:
		char map[20];
		char ngay[20];
		ncc a;
		sp b[20];
		int n;
	public:
		void nhap();
		void xuat();
	friend void cau1(phieu t);
	friend void cau2(phieu &t);
};

void ncc::nhap(){
	cout<<"ma ncc: "; fflush(stdin); gets(mancc);
	cout<<"ten ncc: "; fflush(stdin); gets(tenncc);
	cout<<"dia chi: "; fflush(stdin); gets(dc);
	cout<<"so dien thoai: "; cin>>sdt;
}

void ncc::xuat(){
	cout<<setw(15)<<"ma ncc: "<<mancc
		<<setw(15)<<"ten ncc: "<<tenncc
		<<setw(15)<<"dia chi: "<<dc
		<<setw(20)<<"so dien thoai: "<<sdt<<endl;
}

void sp::nhap(){
	cout<<"ma san pham: "; 	fflush(stdin); gets(masp);
	cout<<"ten san pham: "; fflush(stdin); gets(tensp);
	cout<<"so luong: ";					   cin>>sl;
	cout<<"don gia: "; 					   cin>>dongia;
}

void sp::xuat(){
	cout<<setw(15)<<masp
		<<setw(15)<<tensp
		<<setw(15)<<sl
		<<setw(15)<<dongia
		<<setw(15)<<sl*dongia<<endl;
}

void phieu::nhap(){
	cout<<"ma phieu: "; fflush(stdin); gets(map);
	cout<<"ngay lap: "; fflush(stdin); gets(ngay);
	a.nhap();
	cout<<"so luong san pham la: "; cin>>n;
	for(int i=0; i<n; i++){
		b[i].nhap();
	}
}

void phieu::xuat(){
	cout<<"\nDai hoc Victory"<<endl;
	cout<<"\n==============================PHIEU NHAP VAN PHONG PHAM=============================="<<endl;
	cout<<setw(15)<<"ma phieu: "<<map
		<<setw(15)<<"ngay lap: "<<ngay<<endl;
	a.xuat();
	cout<<setw(15)<<"ma sp"
		<<setw(15)<<"ten san pham"
		<<setw(15)<<"so luong"
		<<setw(15)<<"don gia"
		<<setw(15)<<"thanh tien"<<endl;
	for(int i=0; i<n; i++){
		b[i].xuat();
	}
	int tong=0;
	for(int i=0; i<n; i++){
		tong+=b[i].sl*b[i].dongia;
	}
	cout<<setw(71)<<"tong: "<<tong<<endl;
	cout<<setw(15)<<"Hieu Truong"
		<<setw(25)<<"Phong tai chinh"
		<<setw(15)<<"Nguoi lap"<<endl;
}

void cau1(phieu t){
	int count=0;
	for(int i=0; i<t.n; i++){
		if(t.b[i].sl<80)
		count++;
	}
	cout<<"\nso san pham cos so luong < 80 la: "<<count;
}

void cau2(phieu &t){
	for(int i=0; i<t.n-1; i++){
		for(int j=i+1; j<t.n; j++){
			if(t.b[i].dongia>t.b[j].dongia){
				sp tg=t.b[i];
					t.b[i]= t.b[j];
					t.b[j]= tg;
			}
		}
	}
}

main(){
	phieu p;
	p.nhap();
	p.xuat();
	cau1(p);
	cau2(p);
	p.xuat();
}
