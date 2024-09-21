#include<bits/stdc++.h>
using namespace std;

class sp{
	private:
		float a,b;
	public:
		sp();
		sp(float x, float y);
		friend ostream& operator<<(ostream& x, sp y);
		sp operator+(sp y);
		sp operator-(sp y);
};

sp::sp(){
	a=b=0;
}

sp::sp(float x, float y){
	a=x;b=y;
}

ostream& operator<<(ostream& x, sp y){
	x<<y.a<<"+ i*"<<y.b<<endl;
	return x;
}

sp sp::operator+(sp y){
	sp z;
	z.a= a+y.a;
	z.b= b+y.b;
	return z;
}

sp sp::operator-(sp y){
	sp z;
	z.a= a-y.a;
	z.b= b-y.b;
	return z;
}

main(){
	sp a(3,4),b(5,6);
	cout<<a<<b; 
	cout<<"SP3= "<<a+b;
	cout<<"SP4= "<<a-b;
}

