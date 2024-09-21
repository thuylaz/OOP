#include<bits/stdc++.h>
using namespace std;

class bn;
class nguoi{
	protected:
		char hoten[20];
		int tuoi;
	public:
		void nhap();
		void xuat();
		friend class bn;
		friend void bonus1(bn *x, int n);
		friend void bonus2(bn *x, int n);
};

class bv{
	private:
		char tenbv[20];
		char dc[20];
		char gd[20];
		friend class bn;
};

class bn:public nguoi{
	private:
		char ma[20];
		char tiensu[20];
		char cd[20];
		bv x;
	public:
		void nhap();
		void xuat();
		friend void bonus1(bn *x, int n);
		friend void bonus2(bn *x, int n);
};

void nguoi::nhap(){
	cout<<"ho ten: "; fflush(stdin); gets(hoten);
	cout<<"tuoi: "; cin>>tuoi;
}

void nguoi::xuat(){
	cout<<"ho ten: "
		<<setw(12)<<hoten
		<<setw(12)<<"tuoi: "
		<<setw(12)<<tuoi<<endl;
}

void bn::nhap(){
	nguoi::nhap();
	cout<<"ten benh vien: "; fflush(stdin); gets(x.tenbv);
	cout<<"dia chi: "; fflush(stdin); gets(x.dc);
	cout<<"giam doc: "; fflush(stdin); gets(x.gd);
	cout<<"ma: "; fflush(stdin); gets(ma);
	cout<<"tien su: "; fflush(stdin); gets(tiensu);
	cout<<"chuan doan: "; fflush(stdin); gets(cd);
}

void bn::xuat(){
	nguoi::xuat();
	cout<<"ten benh vien: "
		<<setw(12)<<x.tenbv
		<<setw(12)<<"dia chi: "
		<<setw(12)<<x.dc
		<<setw(12)<<"giam doc: "
		<<setw(12)<<x.gd
		<<setw(12)<<"ma: "
		<<setw(12)<<ma
		<<setw(12)<<"tien su: "
		<<setw(12)<<tiensu
		<<setw(12)<<"chuan doan: "
		<<setw(12)<<cd<<endl;
}

void bonus1(bn *x, int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(x[i].tuoi>30){
			dem++; cout<<"so benh nhan lon hon 30 tuoi la: "<<dem;
			break;
		}else{
			cout<<"khong co benh nhan > 30 tuoi"<<endl;
			break;
		}
	}
}

void bonus2(bn *x, int n){
	for(int i=0; i<n; i++){
		if(strcmp(x[i].ma,"bn01")==0){
			x[i].tuoi=20;
			break;
		}
		
		else{
			cout<<"khong co benh nhan bn01"<<endl;
			break;
		}
	}
}

main(){
	bn x[100];
	int n;
	cout<<"n= "; cin>>n;
	for(int i=0; i<n; i++){
		x[i].nhap();
	}
	
	for(int i=0; i<n; i++){
		x[i].xuat();
	}
	bonus1(x, n);
	bonus2(x,n);
	for(int i=0; i<n; i++){
		x[i].xuat();
	}
}
