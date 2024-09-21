#include<bits/stdc++.h>
using namespace std;

class htg{
	private:
		float a, b, c;
	public:
		float operator+();
		friend istream& operator>>(istream& t, htg &p);
		friend ostream& operator<<(ostream& t, htg p);
};

float htg::operator+(){
	return a+b+c;
}

istream& operator>>(istream& t, htg &p){
	cout<<"canh a: "; t>>p.a;
	cout<<"canh b: "; t>>p.b;
	cout<<"canh c: "; t>>p.c;
	return t;
}
ostream& operator<<(ostream& t, htg p){
	t<<p.a<<"\t"<<p.b<<"\t"<<p.c<<endl;
	return t;
} 


main(){
	htg p;
	ofstream ghi("INOUT.txt");
	cin>>p;
	cout<<p;
	ghi<<p;
	cout<<"chu vi tam giac la: "<<+p<<endl;
	ghi<<"chu vi tam giac la: "<<+p<<endl;
	htg q;
	cin>>q;
	cout<<q;
	ghi<<q;
	cout<<"chu vi tam giac la: "<<+q;
	ghi<<"chu vi tam giac la: "<<+q;
}

