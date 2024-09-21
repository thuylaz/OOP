#include<bits/stdc++.h>
using namespace std;

class ncc{
	private:
		char mancc[20];
		char tenncc[30];
		char dc[30];
	public:
		void nhap();
		void xuat();
};

class hang{
	private:
		char tenhang[30];
		float dongia;
		int sl;
	public:
		void nhap();
		void xuat();
	friend class phieu;
};

class phieu{
	private:
		char maphieu[30];
		char ngay[30];
		int n;
		ncc a;
		hang b[30];
	public:
		void nhap();
		void xuat();
};

void ncc::nhap(){
	cout<<"ma ncc: ";  fflush(stdin); gets(mancc);  
	cout<<"ten ncc: "; fflush(stdin); gets(tenncc); 
	cout<<"dia chi: "; fflush(stdin); gets(dc);     
}

void ncc::xuat(){
	cout<<setw(13)<<"ma ncc: "<<mancc
		<<setw(15)<<"ten ncc: "<<tenncc
		<<setw(15)<<"dia chi: "<<dc<<endl;
}

void hang::nhap(){
	cout<<"ten hang: "; fflush(stdin);gets(tenhang); 
	cout<<"don gia: ";                cin>>dongia;
	cout<<"so luong: ";               cin>>sl;
}

void hang::xuat(){
	cout<<setw(14)<<tenhang
		<<setw(14)<<dongia
		<<setw(14)<<sl
		<<setw(14)<<dongia*sl<<endl;
}

void phieu::nhap(){
	cout<<"ma phieu: "; fflush(stdin); gets(maphieu);
	cout<<"ngay: ";     fflush(stdin); gets(ngay);
	a.nhap();
	cout<<"nhap so hang cua phieu: "; cin>>n;
	for(int i=0; i<n; i++){
		b[i].nhap();
	}	
}

void phieu::xuat(){
	cout<<"==============================PHIEU NHAP HANG=============================="<<endl;
	cout<<setw(15)<<"ma phieu: "<<maphieu
		<<setw(15)<<"ngay lap: "<<ngay<<endl;
	a.xuat();
	cout<<setw(15)<<"ten hang"
		<<setw(15)<<"don gia"
		<<setw(15)<<"so luong"
		<<setw(15)<<"thanh tien"<<endl;
	
	for(int i=0; i<n; i++){
		b[i].xuat();
	}
	float tong=0;
	for(int i=0; i<n; i++){
		tong+=b[i].sl*b[i].dongia;
	}
	cout<<setw(50)<<"cong thanh tien: "<<tong;
}



main(){
	phieu p;
	p.nhap();
	p.xuat();
}
