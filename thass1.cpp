#include<bits/stdc++.h>
using namespace std;

class phieu;
class ncc{
	private:
		char mancc[20];
		char tenncc[20];
		char dc[20];
		int sdt;
	public:
		void nhap();
		void xuat();
};

class sp{
	private:
		char masp[20];
		char tensp[20];
		int sl;
		int dg;
	public:
		void nhap();
		void xuat();
		friend class phieu;
		friend void bonus1(phieu &p);
		friend void bonus2(phieu &p);
		friend void bonus3(phieu &p);
};

class phieu{
	private:
		char map[20];
		char ngay[20];
		ncc a;
		sp b[100];
		int n;
	public:
		void nhap();
		void xuat();
		friend void bonus1(phieu &p);
		friend void bonus2(phieu &p);
		friend void bonus3(phieu &p);
};

void ncc::nhap(){
	cout<<"ma ncc: "; fflush(stdin); gets(mancc);
	cout<<"ten ncc: "; fflush(stdin); gets(tenncc);
	cout<<"dia chi: "; fflush(stdin); gets(dc);
	cout<<"so dien thoai: "; cin>>sdt;
}

void ncc::xuat(){
	cout<<"ma ncc: "
		<<setw(13)<<mancc
		<<setw(13)<<"ten ncc: "
		<<setw(13)<<tenncc
		<<endl<<"dia chi: "
		<<setw(13)<<dc
		<<setw(13)<<"so dien thoai: "
		<<setw(13)<<sdt<<endl;
}

void sp::nhap(){
	cout<<"ma san pham: "; fflush(stdin); gets(masp);
	cout<<"ten san pham: "; fflush(stdin); gets(tensp);
	cout<<"so luong: "; cin>>sl;
	cout<<"don gia: "; cin>>dg;
}

void sp::xuat(){
	cout<<"ma san pham"
	<<setw(12)<<masp
	<<setw(12)<<"ten san pham"
	<<setw(12)<<tensp
	<<setw(12)<<"so luong"
	<<setw(12)<<sl
	<<setw(12)<<"don gia"
	<<setw(12)<<dg
	<<setw(12)<<"thanh tien"
	<<setw(12)<<sl*dg<<endl;
}

void phieu::nhap(){
	cout<<"ma phieu: "; fflush(stdin); gets(map);
	cout<<"ngay lap phieu: "; fflush(stdin); gets(ngay);
	a.nhap();
	cout<<"nhap so luong san pham: "; cin>>n;
	for(int i=0; i<n; i++){
		b[i].nhap();
	}
}

void phieu::xuat(){
	cout<<"ma phieu: "
		<<setw(13)<<map
		<<setw(13)<<"ngay lap phieu: "
		<<setw(13)<<ngay<<endl;
		a.xuat();
		for(int i=0; i<n; i++){
			b[i].xuat();
		}
	int tong=0;
	for(int i=0; i<n; i++){
		tong+=b[i].sl*b[i].dg;
	}
	cout<<setw(70)<<"tong"<<setw(45)<<tong<<endl;
	cout<<setw(13)<<"hieu truong"
		<<setw(23)<<"phong tai chinh"
		<<setw(33)<<"nguoi lap"<<endl;
}

void bonus1(phieu &p){
	int dem=0;
	for(int i=0; i<p.n; i++){
		if(p.b[i].sl<80){
			dem++;
		}
	}
	if(dem==0){
		cout<<"khong co san pham nao co so luong nhap < 80"<<endl;
	}else{
		cout<<"so san pham co so luong nhap < 80 : "<<dem<<endl;
	}
}

void bonus2(phieu &p){
	for(int i=0; i<p.n-1; i++){
		for(int j=i+1; j<p.n; j++){
			if(p.b[i].dg>p.b[j].dg){
				swap(p.b[i], p.b[j]);
			}
		}
	}
}

void bonus3(phieu &p){
	int k;
	do{
		cout<<"nhap vi tri can chen: "; cin>>k;
	}while(k<0||k>p.n);
	sp s;
	s.nhap();
	for(int i=p.n; i>k; i--){
		p.b[i]=p.b[i-1];
	}
	p.b[k]=s;
	p.n++;
}


main(){
	phieu p; int n;
	p.nhap();
	p.xuat();
	bonus1(p);
	bonus2(p);
	p.xuat();
	bonus3(p);
	p.xuat();
}
