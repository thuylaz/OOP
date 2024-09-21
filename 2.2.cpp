#include<bits/stdc++.h>
using namespace std;

class nsx{
	private:
		char mansx[30];
		char tennsx[30];
		char dcnsx[30];
	public:
		void nhap();
		void xuat();	
};

class hang{
	private:
		char mahang[30];
		char tenhang[30];
		nsx x;
	public:
		void nhap();
		void xuat();
};

void nsx::nhap(){
	cout<<"ma NSX: ";      gets(mansx);  fflush(stdin);
	cout<<"ten NSX: ";     gets(tennsx); fflush(stdin);
	cout<<"dia chi NSX: "; gets(dcnsx);  fflush(stdin);
}

void nsx::xuat(){
	cout<<"\nma NSX: "<<mansx;
	cout<<"\nten NSX: "<<tennsx;
	cout<<"\ndia chi NSX: "<<dcnsx;
}

void hang::nhap(){
	cout<<"ma hang: "; gets(mahang); fflush(stdin);
	cout<<"ten hang: "; gets(tenhang); fflush(stdin);
	x.nhap();
}

void hang::xuat(){
	cout<<"\nma hang: "<<mahang;
	cout<<"\nten hang: "<<tenhang;
	x.xuat();
}

main(){
	hang a; 
	a.nhap();
	a.xuat();	
}
