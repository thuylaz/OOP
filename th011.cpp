#include<bits/stdc++.h>
using namespace std;

class phieu;
class phong{
	private:
		char tenp[20];
		char map[20];
		char trp[20];
	public:
		void nhap();
		void xuat();	
};

class nv{
	private:
		char hoten[20];
		char cv[20];
	public:
		void nhap();
		void xuat();	
};

class taisan{
	private:
		char tents[20];
		int sl;
		char tt[20];
	public:
		void nhap();
		void xuat();
		friend void bonus1(phieu &p);	
		friend void bonus2(phieu &p);
};

class phieu{
	private:
		char map[20];
		char ngaykk[20];
		nv a;
		phong b;
		taisan c[100];
		int n;
	public:
		void nhap();
		void xuat();
		friend void bonus1(phieu &p);
		friend void bonus2(phieu &p);	
};

void phong::nhap(){
	cout<<"ten phong: "; fflush(stdin); gets(tenp);
	cout<<"ma phong: "; fflush(stdin); gets(map);
	cout<<"truong phong: "; fflush(stdin); gets(trp);
}

void phong::xuat(){
	cout<<"ten phong: "
		<<setw(13)<<tenp
		<<setw(13)<<"ma phong: "
		<<setw(13)<<map
		<<endl<<"truong phong: "
		<<setw(13)<<trp<<endl;		
}

void nv::nhap(){
	cout<<"nhan vien kiem ke: "; fflush(stdin); gets(hoten);
	cout<<"chuc vu: "; fflush(stdin); gets(cv);
}

void nv::xuat(){
	cout<<"nhan vien kiem ke: "
	<<setw(13)<<hoten
	<<setw(13)<<"chuc vu: "
	<<setw(13)<<cv<<endl;
}

void taisan::nhap(){
	cout<<"ten tai san: "; fflush(stdin); gets(tents);
	cout<<"so luong: "; cin>>sl;
	cout<<"tinh trang: "; fflush(stdin); gets(tt);
}

void taisan::xuat(){
	cout<<"ten tai san: "
	<<setw(13)<<tents
	<<setw(13)<<"so luong: "
	<<setw(13)<<sl
	<<setw(13)<<"tinh trang: "
	<<setw(13)<<tt<<endl;
}

void phieu::nhap(){
	cout<<"ma phieu: "; fflush(stdin); gets(map);
	cout<<"ngay kiem ke: "; fflush(stdin); gets(ngaykk);
	a.nhap();
	b.nhap();
	cout<<"nhap so tai san cua phieu la: "; cin>>n;
	for(int i=0; i<n; i++){
		c[i].nhap();
	}
}

void phieu::xuat(){
	cout<<"ma phieu: "
		<<setw(13)<<map
		<<setw(15)<<"ngay kiem ke: "
		<<setw(13)<<ngaykk<<endl;
		a.xuat();
		b.xuat();
		for(int i=0; i<n; i++){
			c[i].xuat();
		}
}

void bonus1(phieu &p){
	for(int i=0; i<p.n; i++){
		if(strcmp(p.c[i].tents, "may tinh")==0){
			p.c[i].sl=20;
		}else{
			cout<<"khong ton tai may vi tinh"<<endl;
			break;
		}
	}
}

void bonus2(phieu &p){
	for(int i=0; i<p.n-1; i++){
		for(int j=i+1; j<p.n; j++){
			if(p.c[i].sl>p.c[j].sl){
				swap(p.c[i],p.c[j]);
			}
		}
	}
}

main(){
	phieu p; int n;
	p.nhap();
	p.xuat();
	bonus1(p);
	p.xuat();
	bonus2(p);
	p.xuat();
}
