#include<bits/stdc++.h>
using namespace std;

class ps{
	private:
		float ts,ms;
	public:
		friend istream& operator>>(istream& x, ps &y);
		friend ostream& operator<<(ostream& x, ps y);
		ps operator+(ps b);
		float giatri();
};

istream& operator>>(istream& x, ps &y){
	cout<<"nhap tu so, mau so: "; x>>y.ts>>y.ms;
	return x;
}

ostream& operator<<(ostream& x, ps y){
	x<<y.ts<<"/"<<y.ms<<endl;
	return x;
}

ps ps::operator+(ps b){
	ps c;
	c.ts= ts*b.ms+ ms*b.ts;
	c.ms= ms*b.ms;
	return c;
}

main(){
	ps a,b;
	cin>>a>>b;
	cout<<a<<b;
	cout<<a+b;
	
}
