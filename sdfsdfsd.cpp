#include<bits/stdc++.h>
using namespace std;

class ttb2{
	private:
		float a,b,c;
	public:
		ttb2();
		ttb2(float x, float y, float z);
		friend ostream& operator<<(ostream& x, ttb2 y);
		ttb2 operator-();
		ttb2 operator+(ttb2 y);
		ttb2 operator-(ttb2 y);
};

ttb2::ttb2(){
	a=b=c=0;
}

ttb2::ttb2(float x, float y, float z){
	a=x;
	b=y;
	c=z;
}

ostream& operator<<(ostream& x, ttb2 y){
	x<<y.a<<"X"<<char(253);
	if(y.b>=0) x<<"+ "<<y.b<<"X";
	else x<<"- "<<-y.b<<"X";
	if(y.c>=0) x<<"+ "<<y.c;
	else x<<"- "<<-y.c;
	return x;
}

ttb2 ttb2::operator-(){
	ttb2 tg;
	tg.a=-a;
	tg.b=-b;
	tg.c=-c;
	return tg;
}

ttb2 ttb2::operator+(ttb2 y){
	ttb2 tg;
	tg.a=a+y.a;
	tg.b=b+y.b;
	tg.c=c+y.c;
	return tg;
}

ttb2 ttb2::operator-(ttb2 y){
	ttb2 tg;
	tg.a=a-y.a;
	tg.b=b-y.b;
	tg.c=c-y.c;
	return tg;
}

main(){
	ttb2 a(3,4,5), b(5,7,6);
	cout<<a<<endl<<b<<endl;
	cout<<"tong hieu 2 ttb2 la: "<<endl;
	cout<<a+b<<endl;
	cout<<a-b;
	
}
