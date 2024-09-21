#include<bits/stdc++.h>
using namespace std;

class donvi{
	private:
		char mdv[20], tdv[20], dc[20], trgdv[20];
	public:
		void nhap();
		void xuat();
		friend class phieu;
};

class taisan{
	private:
		char mts[20], tts[20], dvt[20];
		int gt;
	public:
		void nhap();
		void xuat();
		friend class phieu;
};

class phieu{
	private:
		char ngay[20],nguoi[20];
		donvi a;
		taisan *b;
		int n;
	public:
		void nhap();
		void xuat();
};

void donvi::nhap(){
	cout<<"ma don vi: "; fflush(stdin); gets(mdv);
	cout<<"ten don vi: "; fflush(stdin); gets(tdv);
	cout<<"dia chi: "; fflush(stdin); gets(dc);
	cout<<"truong dv: "; fflush(stdin); gets(trgdv);
}

void donvi::xuat(){
	cout<<"ma don vi: "<<mdv
		<<setw(13)<<"ten don vi: "<<tdv
		<<setw(13)<<"dia chi: "<<dc
		<<setw(13)<<"truong dv: "<<trgdv<<endl;
}

void taisan::nhap(){
	cout<<"ma tai san: "; fflush(stdin); gets(mts);
	cout<<"ten tai san: "; fflush(stdin); gets(tts);
	cout<<"don vi tinh: "; fflush(stdin); gets(dvt);
	cout<<"gia tri: "; cin>>gt;
}

void taisan::xuat(){
	cout<<mts
		<<setw(19)<<tts
		<<setw(13)<<dvt
		<<setw(13)<<gt<<endl;
		

}

void phieu::nhap(){
	cout<<"ngay lap: "; fflush(stdin); gets(ngay);
	cout<<"nguoi lap: "; fflush(stdin); gets(nguoi);
	a.nhap();
	cout<<"n= "; cin>>n;
	b= new taisan[n];
	for(int i=0; i<n; i++){
		b[i].nhap();
	}

}

void phieu::xuat(){
	cout<<"ngay lap: "<<ngay
	<<setw(13)<<"nguoi lap: "<<nguoi<<endl;
	a.xuat();
		cout<<"ma tai san"
		<<setw(13)<<"ten tai san"
		<<setw(13)<<"don vi tinh"
		<<setw(13)<<"gia tri"<<endl;
	for(int i=0; i<n; i++){
		b[i].xuat();
	}
		int tong=0;
	for(int i=0; i<n; i++){
		tong+=b[i].gt;
	}
	cout<<"tong so luong thiet bi: "<<setw(25)<<tong;
}

main(){
	phieu a;
	a.nhap();
	a.xuat();
}

/*
17/6/2017
hoang thi thuy
dv1
cty adz
hanoi
thuy
3
ts1
nhaxuong
met
5000
ts2
may
chiec
5
ts3
oto
chiec
10

*/
