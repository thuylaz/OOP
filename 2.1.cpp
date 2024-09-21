#include<bits/stdc++.h>
using namespace std;

class date{
	private:
		int ngay;
		int thang;
		int nam;
	public:
		void nhap();
		void xuat();
};

class nhansu{
	private:
		char mans[30];
		char hoten[30];
		date ns;
	public:
		void nhap();
		void xuat();		
};

void date::nhap(){
	cout<<"ngay: ";  cin>>ngay;
	cout<<"thang: "; cin>>thang;
	cout<<"nam: ";   cin>>nam;
}

void date::xuat(){
	cout<<"\nngay/thang/nam sinh: "<<ngay<<"/"<<thang<<"/"<<nam;
}

void nhansu::nhap(){
	cout<<"ma nhan su: "; gets(mans); fflush(stdin);
	cout<<"ho ten: ";     gets(hoten); fflush(stdin);
	ns.nhap();
}

void nhansu::xuat(){
	cout<<"ma nhan su: "<<mans;
	cout<<"\nho ten: "<<hoten;
	ns.xuat();
}


main(){
	nhansu x;
	x.nhap();
	x.xuat();
}
