#include<bits/stdc++.h>
using namespace std;

class diem{
	private:
		float x,y,z;
	public:
		diem();
		diem(float a, float b, float c);
		friend istream& operator>>(istream& x, diem &y);
		friend ostream& operator<<(ostream& x, diem y);
		diem operator+(diem k);
};

diem::diem(){
	x=y=z=0;
}

diem::diem(float a, float b, float c){
	x=a;
	y=b;
	z=c;
}

istream& operator>>(istream& x, diem &y){
	cout<<"nhap x,y,z= "; x>>y.x>>y.y>>y.z;
	return x;
}

ostream& operator<<(ostream& x, diem y){
	x<<y.x<<","<<y.y<<","<<y.z<<endl;
	return x;
}

diem diem::operator+(diem k){
	diem m;
	m.x= x+k.x;
	m.y= y+k.y;
	m.z= z+k.z;
	return m;
}

main(){
	diem m(3,5,7),n(2,9,6);
	cout<<m<<n;
	cout<<m+n;
	
}
