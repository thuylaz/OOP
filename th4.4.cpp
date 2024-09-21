#include<bits/stdc++.h>
using namespace std;

class maygiat;
class tulanh;
class dien{
	protected:
		int cs;
		int da;
	public:
		dien(int a, int b);
};

dien::dien(int a, int b){
	cs=a;
	da=b;
}

class maygiat:public dien{
	private:
		int dtkg;
		int loai;
	public:
		maygiat(int a, int b, int c, int d);
		void xuat();
};

class tulanh:public dien{
	private:
		int dtl;
		int songan;
	public:
		tulanh(int a, int b, int e, int f);
		void xuat();
};

maygiat::maygiat(int a, int b, int c, int d):dien(a, b){
	dtkg=c;
	loai=d;
}

void maygiat::xuat(){
	cout<<"cong suat: "; cin>>cs;
	cout<<"dien ap: "; cin>>da;
	cout<<"dung tich(kg): "; cin>>dtkg;
	cout<<"loai: "; cin>>loai;
}

tulanh::tulanh(int a, int b, int e, int f):dien(a, b){
	dtl=e;
	songan=f;
}

void tulanh::xuat(){
	cout<<"cong suat: "; cin>>cs;
	cout<<"dien ap: "; cin>>da;
	cout<<"dung tich(lit): "; cin>>dtl;
	cout<<"songan: "; cin>>songan;
}

main(){
	maygiat a(332, 554, 6, 1);
	a.xuat();
	cout<<endl;
	tulanh b(325, 546, 12, 123);
	b.xuat();
}
