#include<bits/stdc++.h>
using namespace std;

/*class nhansu{
	protected:
		char hoten[50], gt[5], dc[100];
		int d,m,y;
	
};

class congchuc:public nhansu{
	private:
		char nganh[20], trinhdo[50];
		int nam;
		float hsluong, phcap;
	public:
		void nhap();
		void xuat();
		float thunhap();
		friend void min(congchuc *c, int n);
		friend void sx(congchuc *a, int n);
};

void congchuc::nhap(){
	cout<<"ho ten: "; fflush(stdin); gets(hoten);
	cout<<"gioi tinh: "; fflush(stdin); gets(gt);
	cout<<"dia chi: "; fflush(stdin); gets(dc);
	cout<<"ngay/thang/nam: "; cin>>d>>m>>y;
	cout<<"nganh nghe: "; fflush(stdin); gets(nganh);
	cout<<"trinh do: "; fflush(stdin); gets(trinhdo);
	cout<<"nam/hsluong/phcap: "; cin>>nam>>hsluong>>phcap;
}

void congchuc::xuat(){
	cout<<"ho ten: "<<hoten
		<<setw(13)<<"gioi tinh: "<<gt
		<<setw(13)<<"dia chi: "<<dc
		<<setw(13)<<"ngay/thang/nam: "<<d<<"/"<<m<<"/"<<y<<endl
		<<setw(13)<<"nganh nghe: "<<nganh
		<<setw(13)<<"trinh do: "<<trinhdo
		<<setw(13)<<"nam vao cq: "<<nam
		<<setw(13)<<"he so luong: "<<hsluong
		<<setw(13)<<"phu cap: "<<phcap<<endl;
}

float congchuc::thunhap(){
	return hsluong*830+phcap;
}

void min(congchuc *c, int n){
	float min=0;
	for(int i=0; i<n; i++){
		min=c[0].thunhap();
		if(c[i].thunhap()<min)
		min=c[i].thunhap();
	}
	for(int i=0; i<n; i++){
		if(c[i].thunhap()==min)
			c[i].xuat();
	}
}

void sx(congchuc *a, int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(a[i].hoten,a[j].hoten)>0){
				swap(a[i],a[j]);
			}
		}
	}
}

main(){
	congchuc *c;
	int n;
	do{
		cout<<"n= "; cin>>n;
	}while(n<=0||n>=50);
	c= new congchuc[n];
	for(int i=0; i<n; i++){
		c[i].nhap();
		
	}
	
	for(int i=0; i<n; i++){
		c[i].xuat();
	}
	cout<<"cong chuc co luong thaps nhat: "<<endl;
	min(c,n);
	
	cout<<"cong chu co ten giam dan"<<endl;
	sx(c,n);
	for(int i=0; i<n; i++){
		c[i].xuat();
	}
}*/

class tg{
	private:
		int gio,phut,giay;
	public:
		tg();
		tg(int a, int b, int c);
		friend istream& operator>>(istream& x, tg &y);
		friend ostream& operator<<(ostream& x, tg y);
		tg operator-(tg y);
};

tg::tg(){
	gio=phut=giay=0;
}

tg::tg(int a, int b, int c){
	gio=a;
	phut=b; 
	giay=c;
}

istream& operator>>(istream& x, tg &y){
	do{
		cout<<"nhap gio: "; x>>y.gio;
	}while(y.gio<0||y.gio>24);
	do{
		cout<<"nhap phut: "; x>>y.phut;
	}while(y.phut<0||y.phut>60);
	do{
		cout<<"nhap giay: "; x>>y.giay;
	}while(y.giay<0||y.giay>60);
	return x;	
}

ostream& operator<<(ostream& x, tg y){
	x<<y.gio<<"gio "<<y.phut<<"phut "<<y.giay<<"giay "<<endl;
	return x;
}

tg tg::operator-(tg y){
	tg z;
	z.gio=gio-y.gio;
	z.phut=phut-y.phut;
	z.giay=giay-y.giay;
	return z;
}

main(){
	tg a,b;
	cin>>a>>b;
	cout<<a<<endl<<b<<endl;
	cout<<a-b;
}


/*
2
thuy
nu
nd
22
9
2003
sale
tot
2020
3
20
nhung
nu
nd
22
2
2006
it
tot
2020
4
20

*/
