#include<bits/stdc++.h>
using namespace std;

class phieu;
class phong{
	private:
		char tenphong[30];
		char maphong[30];
		char truongphong[30];
	public:
		void nhap();
		void xuat();
};

class nhanvien{
	private:
		char hoten[30];
		char chucvu[30];
	public: 
		void nhap();
		void xuat();
};

class taisan{
	private:
		char tents[30];
		int sl;
		char tinhtrang[30];
	public: 
		void nhap();
		void xuat();
		friend class phieu;
		friend void bonus1(phieu &t);
		friend void bonus2(phieu &t);
};

class phieu{
	private: 
		char maph[30];
		char ngay[30];
		phong a;
		nhanvien b;
		taisan c[100];
		int n;
	public: 
		void nhap();
		void xuat();
		friend void bonus1(phieu &t);
		friend void bonus2(phieu &t);
};

void phong::nhap(){
	cout<<"ten phong: "; gets(tenphong); fflush(stdin); 
	cout<<"ma phong: "; fflush(stdin); gets(maphong);
	cout<<"truong phong: "; fflush(stdin); gets(truongphong);
}

void phong::xuat(){
	cout<<setw(15)<<"ten phong: "<<tenphong
	<<setw(15)<<"ma phong: "<<maphong
	<<setw(15)<<"truong phong: "<<truongphong<<endl;
}

void nhanvien::nhap(){
	cout<<"ho ten: "; fflush(stdin); gets(hoten);
	cout<<"chuc vu: "; fflush(stdin); gets(chucvu);
}

void nhanvien::xuat(){
	cout<<setw(15)<<"ho ten: "<<hoten
		<<setw(15)<<"chuc vu: "<<chucvu<<endl;
}

void taisan::nhap(){
	cout<<"ten tai san: "; fflush(stdin); gets(tents);
	cout<<"so luong: ";  cin>>sl;
	cout<<"tinh trang: "; fflush(stdin); gets(tinhtrang);
}

void taisan::xuat(){
	cout<<setw(15)<<tents
		<<setw(15)<<sl
		<<setw(15)<<tinhtrang<<endl;
}

void phieu::nhap(){
	cout<<"ma phieu: "; fflush(stdin); gets(maph);
	cout<<"ngay lap: "; fflush(stdin); gets(ngay);
	b.nhap();
	a.nhap();
	cout<<"nhap so tai san cua phieu: "; cin>>n;
	for(int i=0; i<n; i++){
		c[i].nhap();
	}
}

void phieu::xuat(){
	cout<<setw(50)<<"PHIEU KIEM KE TAI SAN"<<endl;
	cout<<setw(15)<<"ma phieu: "<<maph
		<<setw(15)<<"ngay lap: "<<ngay<<endl;
	b.xuat();
	a.xuat();
	cout<<setw(15)<<"ten tai san"
		<<setw(15)<<"so luong"
		<<setw(15)<<"tinh trang"<<endl;
	
	for(int i=0; i<n; i++){
		c[i].xuat();
	}
	cout<<"tong so tai san da kiem ke: "<<n;
	int tong=0;
	for(int i=0; i<n; i++){
		tong+=c[i].sl;
	}
	cout<<"\t"<<"tong so luong: "<<tong<<endl;
}

void bonus1(phieu &t){
	for(int i=0; i<t.n; i++){
		if(strcmp(t.c[i].tents, "may vi tinh")==0)
		t.c[i].sl=20;
	}
}

void bonus2(phieu &t){
	for(int i=0; i<t.n-1; i++){
		for(int j=i+1; j<t.n; j++){
			if(t.c[i].sl>t.c[j].sl){
				taisan tg=t.c[i];
				t.c[i]= t.c[j];
				t.c[j]= tg;
			}
		}
	}
}

main(){
	phieu k;
	k.nhap();
	k.xuat();
	bonus1(k);
	k.xuat();
	bonus2(k);
	k.xuat();
}
