#include<bits/stdc++.h>
using namespace std;

class ngay{
	protected:
		int d,m,y;
	public:
		ngay();
		ngay(int a, int b, int c);
		void nhap();
		void xuat();
};

class nguoi:public ngay{
	private:
		char cmt[20],hoten[20],nois[20];
	public:
		nguoi();
		nguoi(int a, int b, int c, char *d, char *e, char *f);
		void nhap();
		void xuat();
		void operator=(nguoi x);
		friend void sx(nguoi *a, int n);
};

ngay::ngay(){
	d=m=y=0;
}

ngay::ngay(int a, int b, int c){
	d=a;
	m=b;
	y=c;
}

void ngay::nhap(){
	cout<<"ngay/thang/nam: "; cin>>d>>m>>y;
}

void ngay::xuat(){
	cout<<d<<"/"<<m<<"/"<<y;
	
}

nguoi::nguoi():ngay(){
	strcpy(cmt,"");
	strcpy(hoten,"");
	strcpy(nois,"");
}

nguoi::nguoi(int a, int b, int c, char *d, char *e, char *f):ngay(a,b,c){
	strcpy(cmt,d);
	strcpy(hoten,e);
	strcpy(nois,f);	
}

void nguoi::nhap(){
	ngay::nhap();
	cout<<"chung minh thu: "; fflush(stdin); gets(cmt);
	cout<<"ho ten: "; fflush(stdin); gets(hoten);
	cout<<"noi sinh: "; fflush(stdin); gets(nois);
}

void nguoi::xuat(){
	ngay::xuat();
	cout<<setw(14)<<cmt
		<<setw(18)<<hoten
		<<setw(14)<<nois<<endl;		
}

void sx(nguoi *a, int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; i<n; j++){
			if(a[i].y<a[i].y){
				swap(a[i],a[j]);
			}
		}
	}
}

main(){
	nguoi *k;
	int n;
	k= new nguoi[n];
	cout<<"n= "; cin>>n;
	for(int i=0; i<n; i++){
		k[i].nhap();
	}
	
	cout<<"ngay/thang/nam"
			<<setw(17)<<"chung minh thu: "
			<<setw(14)<<"ho ten: "
			<<setw(14)<<"noi sinh: "<<endl;
	for(int i=0; i<n; i++){
		k[i].xuat();
	}
	
	sx(k,n);
	for(int i=0; i<n; i++){
		k[i].xuat();
	}
}

/*
2
22
9
2003
cmt1
thuy
nd
22
2
2006
cmt2
nhung
hn

*/

