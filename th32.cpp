#include<bits/stdc++.h>
using namespace std;

class nsx{
	private:
		char mansx[20];
		char tennsx[20];
		char dc[20];
		friend class hang;
};

class hang{
	private:
		char mah[20];
		char tenh[20];
		int dg;
		float trl;
		nsx x;
	public:
		void nhap();
		void xuat();
};

void hang::nhap(){
	cout<<"ma hang: "; fflush(stdin); gets(mah);
	cout<<"ten hang: "; fflush(stdin); gets(tenh);
	cout<<"don gia: "; cin>>dg;
	cout<<"trong luong: "; cin>>trl;
	cout<<"ma nsx: "; fflush(stdin); gets(x.mansx);
	cout<<"ten nsx: "; fflush(stdin); gets(x.tennsx);
	cout<<"dia chi nsx: "; fflush(stdin); gets(x.dc);
}

void hang::xuat(){
	cout<<mah<<setw(10)<<tenh<<setw(10)<<dg
	<<setw(10)<<trl<<setw(10)<<x.mansx<<setw(10)<<x.tennsx
	<<setw(10)<<x.dc<<endl;
	
}

main(){
	hang h;
	h.nhap();
	h.xuat();
}
