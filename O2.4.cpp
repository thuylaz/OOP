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
};

class bv{
	private:
		char tenbv[20];
		char dc[20];
		char giamdoc[20];
	public:
	friend class bn;
};

class bn:public nguoi{
	private:
		char ma[20];
		char tieusu[20];
		char chuandoan[20];
		bv a;
	public: 
		void nhap();
		void xuat();
	friend void bonus1(bn *x, int n);
	friend void bonus2(bn *x, int n);
};

void nguoi::nhap(){
	cout<<"ho ten: "; fflush(stdin); gets(hoten);
	cout<<"tuoi: ";   fflush(stdin); cin>>tuoi;
}

void nguoi::xuat(){
	cout<<"ho ten: "<<hoten<<endl;
	cout<<"tuoi: "<<tuoi<<endl;
}

void bn::nhap(){
	nguoi::nhap();
	cout<<"ma benh nhan: "; 	fflush(stdin); gets(ma);
	cout<<"tieu su: "; 			fflush(stdin); gets(tieusu);
	cout<<"chuan doan: "; 		fflush(stdin); gets(chuandoan);
	cout<<"ten banh vien: "; 	fflush(stdin); gets(a.tenbv);
	cout<<"dia chi: "; 			fflush(stdin); gets(a.dc);
	cout<<"giam doc: "; 		fflush(stdin); gets(a.giamdoc);
}

void bn::xuat(){
	nguoi::xuat();
	cout<<"ma benh nhan: "<<ma<<endl;
	cout<<"tieu su: "<<tieusu<<endl;
	cout<<"chuan doan: "<<chuandoan<<endl;
	cout<<"ten banh vien: "<<a.tenbv<<endl;
	cout<<"dia chi: "<<a.dc<<endl;
	cout<<"giam doc: "<<a.giamdoc<<endl;	
}

void bonus1(bn *x, int n){
	int count=0;
	for(int i=0; i<n; i++){
		if(x[i].tuoi>30){
			count++;		cout<<"so benh nhan > 30 tuoi la: "<<count;		
		}else{
			cout<<"khong co benh nhan > 30 tuoi";
		}
	}
}

void bonus2(bn *x, int n){
	for(int i=0;i<n;i++)
	{
		if(strcmp(x[i].ma,"BN01")==0)
		x[i].tuoi=20;
		else
		{
			cout<<"\nkhong co benh nhan BN01"<<endl;
			break;
		} 
	}
}

main(){
	bn *x;
	int n;
	x= new bn[n];
	cout<<"nhap so luong benh nhan: "; cin>>n;
	for(int i=0; i<n; i++){
		x[i].nhap();
	}
	for(int i=0; i<n; i++){
		x[i].xuat();
	}
	bonus1(x, n);
	bonus2(x, n);
}
