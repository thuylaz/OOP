#include<bits/stdc++.h>
using namespace std;

class phieu;
class sv{
	private:
		char masv[20];
		char tensv[30];
		char lop[20];
		int khoa;
	public:
		void nhap();
		void xuat();
};

class mon{
	private:
		char tenmon[30];
		int sotrinh;
		int diem;
	public:
		void nhap();
		void xuat();
		friend class phieu;
		friend void bonus1(phieu t);
		friend void bonus2(phieu &t);
};

class phieu{
	private:
		sv a;
		mon b[20];
		int n;
	public:
		void nhap();
		void xuat();
	friend void bonus1(phieu t);
	friend void bonus2(phieu &t);
};

void sv::nhap(){
	cout<<"ma sinh vien: "; 	fflush(stdin); gets(masv);
	cout<<"ten sinh vien: "; 	fflush(stdin); gets(tensv);
	cout<<"lop: ";           	fflush(stdin); gets(lop);
	cout<<"khoa: "; 						   cin>>khoa;
}

void sv::xuat(){
	cout<<setw(15)<<"ma sinh vien: "<<masv
	<<setw(20)<<"ten sinh vien: "<<tensv
	<<setw(15)<<"lop: "<<lop
	<<setw(15)<<"khoa: "<<khoa<<endl;
}

void mon::nhap(){
	cout<<"ten mon: "; fflush(stdin);   gets(tenmon);
	cout<<"so trinh: "; 				cin>>sotrinh;
	cout<<"diem: "; 					cin>>diem;
}

void mon::xuat(){
	cout<<setw(15)<<tenmon
		<<setw(15)<<sotrinh
		<<setw(15)<<diem<<endl;
}

void phieu::nhap(){
	a.nhap();
	cout<<"so luong mon la: "; cin>>n;
	for(int i=0; i<n; i++){
		b[i].nhap();
	}	
}

void phieu::xuat(){
	cout<<"==============================PHIEU BAO DIEM=============================="<<endl;
	a.xuat();
	cout<<setw(15)<<"ten mon"
		<<setw(15)<<"so trinh"
		<<setw(15)<<"diem"<<endl;
	for(int i=0; i<n; i++){
		b[i].xuat();
	}
	//t: tong sotrinh, ts: tong cua sotrinh*diem
	float t=0, ts;
	for(int i=0; i<n; i++){
		t=t+b[i].sotrinh;
		ts=ts+ b[i].sotrinh*b[i].diem;
	}
	cout<<setw(44)<<"Diem trung binh: "<<ts/t;
}

void bonus1(phieu t){
	cout<<"\ncac mon co so trinh lon hon 3 la:\n";
	for(int i=0; i<t.n; i++){
		if(t.b[i].sotrinh>3)
		t.b[i].xuat();
	}	
}

void bonus2(phieu &t){
	int k;
	do{
		cout<<"nhap vi tri can chen: "; cin>>k;
	}while(k<0||k>t.n);
	mon m;
	m.nhap();
	for(int i=t.n; i>k; i--){
		t.b[i]=t.b[i-1];
	}
	t.b[k]=m;
	t.n++;
	t.xuat();
}

main(){
	phieu p;
	p.nhap();
	p.xuat();
	bonus1(p);
	bonus2(p);
}
