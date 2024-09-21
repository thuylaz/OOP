#include<bits/stdc++.h>
using namespace std;

class nt{
	private:
		float a,b;
	public:
		nt();
		nt(float x, float y);
		~nt();
		nt operator-();
		friend istream& operator>>(istream& x, nt &y);
		friend ostream& operator<<(ostream& x, nt y);
};

nt::nt(){
	a=b=0;
}

nt::nt(float x, float y){
	a=x;
	b=y;
}

nt::~nt(){
	a=b=0;
}

istream& operator>>(istream& x, nt &y){
	cout<<"a, b= "; x>>y.a>>y.b;
	return x;
}

ostream& operator<<(ostream& x, nt y){
	x<<y.a<<"X";
	if(y.b>=0) x<<"+ "<<y.b;
	else x<<"- "<<-y.b;
}

nt nt::operator-(){
	nt tg;
	tg.a=-a;
	tg.b=-b;
	return tg;
}

main(){
	nt a;
	cin>>a;
	cout<<a;
	cout<<"\nsau khi doi dau la: ";
	cout<<-a;
}
