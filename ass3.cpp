#include<bits/stdc++.h>
using namespace std;  

class ps{
	private:
		float ts, ms;
	public:
		ps();
		ps(float a, float b);
		ps operator*(ps y);
		float operator++();
		friend istream& operator>>(istream& x, ps &y);
		friend ostream& operator<<(ostream& x, ps y);
};

ps::ps(){
}

ps::ps(float a, float b){
	ts =a;
	ms= b;
}

istream& operator>>(istream& x, ps &y){
	cout<<"tu so= "; x>>y.ts;
	cout<<"mau so= "; x>>y.ms;
	return x;
}

ostream& operator<<(ostream& x, ps y){
	x<<y.ts<<"/"<<y.ms<<endl;
	return x;
}

ps ps::operator*(ps y){
	ps tich;
	tich.ts= ts*y.ts;
	tich.ms= ms*y.ms;
	return tich;
}

float ps::operator++(){
	return ts/ms;
}

main(){
	ps a(3,4),  x, y;
	ofstream ghi("PHANSO.txt");
	cout<<a;
	cout<<"phan so x: "; cin>>x; cout<<x;
	cout<<"phan so y: "; cin>>y; cout<<y;
	ps tich=x*y;
	cout<<"tich 2 phan so la: "<<"\n"<<tich<<"="<<++tich;
	ghi<<"tich 2 phan so la: "<<"\n"<<tich<<"="<<++tich;
}
