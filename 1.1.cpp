#include<bits/stdc++.h>
using namespace std;

class SINHVIEN{
	private:
		char Masv[30];
		char Hoten[30];
		char Tuoi[30];
		char Diem[30];
	public:
		void nhap();
		void xuat();
};

void SINHVIEN::nhap(){
	cout<<"ma sinh vien: "; fflush(stdin); gets(Masv);
	cout<<"ho ten: "; fflush(stdin); gets(Hoten);
	cout<<"tuoi: "; fflush(stdin); gets(Tuoi);
	cout<<"Diem: "; fflush(stdin); gets(Diem);
}

void SINHVIEN::xuat(){
	cout<<setw(15)<<"ma sinh vien: "<<setw(15)<<Masv
	<<setw(15)<<"ho ten: "<<setw(15)<<Hoten
	<<setw(15)<<"tuoi: "<<setw(15)<<Tuoi
	<<setw(15)<<"Diem: "<<setw(15)<<Diem<<endl;
}

main(){
	SINHVIEN a, b;
	a.nhap();
	a.xuat();
	b.nhap();
	b.xuat();
}
