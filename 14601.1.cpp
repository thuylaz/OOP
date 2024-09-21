#include<bits/stdc++.h>
using namespace std;
/*
class nguoi;
class cty;
class nguoi{
	protected:
		char hoten[20];
		int tuoi;
		char gt[20];
	public:
		void nhap();
		void xuat();
};

class nv:public nguoi{
	private:
		char mnv[20];
		char cv[20];
		int luong;
	public:
		void nhap();
		void xuat();
};

class cty{
	private:
		char mct[20];
		char dc[20];
		nv *x;
		int n;
	public:
		void nhap();
		void xuat();
};

void nguoi::nhap(){
	cout<<"ho ten: "; fflush(stdin); gets(hoten);
	cout<<"tuoi: "; cin>>tuoi;
	cout<<"gioi tinh: "; fflush(stdin); gets(gt);
}

void nguoi::xuat(){
	cout<<"ho ten: "<<hoten
		<<setw(13)<<"tuoi: "<<tuoi
		<<setw(13)<<"gioi tinh: "<<gt<<endl;
}

void nv::nhap(){
	nguoi::nhap();
	cout<<"ma nv: "; fflush(stdin); gets(mnv);
	cout<<"chuc vu: "; fflush(stdin); gets(cv);
	cout<<"luong: "; cin>>luong;
}

void nv::xuat(){
	nguoi::xuat();
	cout<<"ma nv: "<<mnv
		<<setw(13)<<"chuc vu: "<<cv
		<<setw(13)<<"luong: "<<luong<<endl;
}

void cty::nhap(){
	cout<<"ma cong ty: "; fflush(stdin); gets(mct);
	cout<<"dia chi: "; fflush(stdin); gets(dc);
	cout<<"n= "; cin>>n;
	x=new nv[n];
	for(int i=0; i<n; i++){
		x[i].nhap();
	}
}

void cty::xuat(){
	cout<<"ma cty: "<<mct
		<<setw(13)<<"dia chi: "<<dc<<endl;
	for(int i=0; i<n; i++){
		x[i].xuat();
	}		
}


main(){
	cty x;
	x.nhap();
	x.xuat();
}

*/

class ptb2{
	private:
		float a,b,c;
	public:
		friend istream& operator>>(istream& x, ptb2 &y),
		friend ostream& operator<<(ostream& x, ptb2 y),
		ptb2 operator-(ptb2 m);
		float operator--();
};

istream& operator>>(istream& x, ptb2 &y){
	cout<<"a,b,c= "; x>>y.a>>y.b>>y.c;
	return x;
}
ostream& operator<<(ostream& x, ptb2 y){
	x<<y.a<<y.b<<y.c<<endl;
	return x;
}

ptb2 ptb2::operator-(ptb2 m){
	ptb2 z;
	z.a=a-m.a;
	z.b=b-m.b;
	z.c=c-m.c;
	return z;
}

float ptb2::operator--(){
	return (a+b+c)/3;
}

main(){
	ptb2 a,b;
	cin>>a>>b;
	cout<<a<<b;
}

/*
s1
hanoi
2
thuy
20
nu
nv1
ketoan
30
nhung
25
nam
nv2
it
20

*/
