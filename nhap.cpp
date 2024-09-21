#include<bits/stdc++.h>
using namespace std;

class vecto{
	private:
		float x,y;
	public:
		vecto();
		vecto(float a, float b);
		friend istream& operator>>(istream& x, vecto &y);
		friend ostream& operator<<(ostream& x, vecto y);
		vecto operator-(vecto m);
		vecto operator+(vecto m);
};

vecto::vecto(){
	x=y=0;
}

vecto::vecto(float a, float b){
	x=a; y=b;
}

istream& operator>>(istream& x, vecto &y){
	cout<<"nhap toa do: "; x>>y.x>>y.y;
	return x;
}

ostream& operator<<(ostream& x, vecto y){
	x<<"("<<y.x<<","<<y.y<<")"<<endl;
	return x;
}

vecto vecto::operator-(vecto m){
	vecto z;
	z.x=x-m.x;
	z.y=y-m.y;
	return z;
}

vecto vecto::operator+(vecto m){
	vecto z;
	z.x=x+m.x;
	z.y=y+m.y;
	return z;
}

main(){
	vecto a,b;
	cin>>a>>b;
	cout<<"A"<<a<<endl<<"B"<<b<<endl;
	cout<<"C"<<a-b<<endl;
	cout<<"D"<<a+b<<endl;
}

