#include<bits/stdc++.h>
using namespace std;

class hang{
	private:
		char mahang[30];
		char tenhang[30];
		float dongia;
		int sl;
		int n;
		
	public:
		void nhap();
		void xuat();
};

void hang::nhap(){
	cout<<"ma hang: "; fflush(stdin); gets(mahang);
	cout<<"ten hang: "; fflush(stdin); gets(tenhang);
	cout<<"don gia: "; fflush(stdin); cin>>dongia;
	cout<<"so luong: "; cin>>sl;
}

void hang::xuat(){
	float tt=0;
	tt=dongia*sl;
	cout<<setw(10)<<"ma hang: "<<setw(10)<<mahang
	<<setw(12)<<"ten hang: "<<setw(10)<<tenhang
	<<setw(12)<<"don gia: "<<setw(10)<<dongia
	<<setw(12)<<"so luong: "<<setw(10)<<sl
	<<setw(14)<<"thanh tien: "<<setw(10)<<tt<<endl;
	
}

main(){
	hang h;
	int n;
	cout<<"so mat hang: "; cin>>n;
	for(int i=0; i<n; i++){
		h.nhap();
		h.xuat();
	}
	
}
