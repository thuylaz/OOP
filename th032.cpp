#include<bits/stdc++.h>
using namespace std;

class stu;
class school{
	private:
		char names[20];
		char dates[20];
		friend class facul;
		friend class stu;
};

class facul{
	private:
		char namef[20];
		char datef[20];
		school x;
	public:
		void nhap();
		void xuat();
		friend class stu;
};

class person{
	protected:
		char namep[20];
		char birth[20];
		char add[20];
	public:
		void nhap();
		void xuat();
		person();
};

class stu:public person{
	private:
		facul y;
		int cl;
		int score;
	public:
		void nhap();
		void xuat();
		stu();	
};

void facul::nhap(){
	cout<<"ten truong: "; fflush(stdin); gets(x.names);
	cout<<"ngay thanh lap truong: "; fflush(stdin); gets(x.dates);
	cout<<"ten khoa: "; fflush(stdin); gets(namef);
	cout<<"ngay thanh lap khoa: "; fflush(stdin); gets(datef);
}

void facul::xuat(){
	cout<<x.names<<setw(10)<<x.dates<<setw(10)<<namef<<setw(10)<<datef<<endl;
}

void person::nhap(){
	cout<<"ten hs: "; fflush(stdin); gets(namep);
	cout<<"ngay sinh: "; fflush(stdin); gets(birth);
	cout<<"dia chi: "; fflush(stdin); gets(add);
}

void person::xuat(){
	cout<<namep<<setw(10)<<birth<<setw(10)<<add<<endl;
}

person::person(){
	strcpy(namep,"");
	strcpy(birth,"");
	strcpy(add,"");
}

stu::stu():person(){
	strcpy(y.namef,"");
	strcpy(y.datef,"");
	strcpy(y.x.names,"");
	strcpy(y.x.dates,"");
	cl=0;
	score=0;
}

void stu::nhap(){
	person::nhap();
	y.nhap();
	cout<<"lop: "; cin>>cl;
	cout<<"diem: "; cin>>score;
}

void stu::xuat(){
	person::xuat();
	y.xuat();
	cout<<cl<<setw(10)<<score<<endl;
}

main(){
	stu s;
	s.nhap();
	s.xuat();
}
