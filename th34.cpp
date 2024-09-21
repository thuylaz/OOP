#include<bits/stdc++.h>
using namespace std;

class pt{
	private:
		float a,b,c;
	public:
		void nhap();
		void xuat();
		void giai();
		pt();
		pt(float x, float y, float z);
};

void pt::nhap(){
	cout<<"a= "; cin>>a;
	cout<<"b= "; cin>>b;
	cout<<"c= "; cin>>c;
}

void pt::xuat(){
	cout<<a<<"X"<<(char)253<<" + "<<b<<"X + "<<c<<endl;
}

void pt::giai(){
	if(a==0) cout<<"k phai la phuong trinh bac 2";
	else{
		float delta= b*b-4*a*c;
		if(delta<0){
			cout<<"pt vo nghiem";
		}else{
			cout<<"x1= "<<(b+sqrt(delta))/2*a;
			cout<<"x2= "<<(-b+sqrt(delta))/2*a<<endl;
		}
	}
}

pt::pt(){
	a=b=c=0;
}

pt::pt(float x, float y, float z){
	a=x; b=y; c=z;
}

main(){
	pt p(1, -3, 2);
	p.xuat();
	p.giai();
	pt q;
	q.nhap();
	q.xuat();
	q.giai();
	
}
