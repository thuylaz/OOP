#include<bits/stdc++.h>
using namespace std;

class ttb2{
	private:
		float a, b, c;
	public:
		void nhap();
		void xuat();
		ttb2 operator+(ttb2 q);
		ttb2 operator-(); //doi dau
};

ttb2 ttb2::operator-(){
	ttb2 k;
	k.a= -a;
	k.b= -b;
	k.c= -c;
	return k;
}

/*ttb2 ttb2::operator-(){
	a=-a;
	b=-b;
	c=-c;
	return *this; dung cai nay se bi thay doi gia tri a, b, c
}*/

void ttb2::nhap(){
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	cout<<"c="; cin>>c;
}

void ttb2::xuat(){
	cout<<a<<"X"<<(char)253<<" + "<<b<<"X + "<<c<<endl;
}

ttb2 ttb2::operator+(ttb2 q){
	ttb2 k;
	k.a= a+ q.a;
	k.b= b+ q.b;
	k.c= c+ q.c;
	return k;
} 

main(){
	ttb2 p, q;
	p.nhap();
	q.nhap();
	ttb2 k=p+ q;
	k.xuat();
	k=-k;
	k.xuat();
}
