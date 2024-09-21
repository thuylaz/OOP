#include<bits/stdc++.h>
using namespace std;

class hang{
	private:
		char mahang[30];
		char tenhang[30];
		int dongia;
	public:
		void nhap();
		void xuat();
		friend class phieu;	
};

class phieu{
	private:
		char maphieu[30];
		hang x[100];
		int n;
	public:
		void nhap();
		void xuat();	
};

void hang::nhap(){
	cout<<"ma hang: ";  fflush(stdin); gets(mahang);  
	cout<<"ten hang: "; fflush(stdin); gets(tenhang); 
	cout<<"don gia: ";                 cin>>dongia;
}

void hang::xuat(){
	cout<<"\nma hang: "<<mahang;
	cout<<"\nten hang: "<<tenhang;
	cout<<"\ndon gia: "<<dongia<<endl;
}

void phieu::nhap(){
	cout<<"ma phieu: "; gets(maphieu); fflush(stdin);
	cout<<"n= "; cin>>n;
	for(int i=0; i<n; i++){
		x[i].nhap();
	}
	
}

void phieu::xuat(){
	cout<<"\nma phieu: "<<maphieu;	
	for(int i=0; i<n; i++){
		x[i].xuat();
	}
}

main(){
	phieu p;
	p.nhap();
	p.xuat();
}
