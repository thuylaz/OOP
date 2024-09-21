#include<bits/stdc++.h>
using namespace std;

class ptb2{
	private:
		float a,b,c;
	public:
		friend istream& operator>>(istream& x, ptb2 &y);
		friend ostream& operator<<(ostream& x, ptb2 y);
		ptb2 operator-(ptb2 y);
		float operator--();
};

istream& operator>>(istream& x, ptb2 &y){
	cout<<"nhap a, b, c: "; x>>y.a>>y.b>>y.c;
	return x;
}

ostream& operator<<(ostream& x, ptb2 y){
	x<<y.a<<"X"<<char(253);
	if(y.b>=0) x<<"+ "<<y.b<<"X";
	else x<<"- "<<-y.b<<"X";
	if(y.c>=0) x<<"+ "<<y.c;
	else x<<"- "<<-y.c;
}

ptb2 ptb2::operator-(ptb2 y){
	ptb2 tg;
	tg.a= a-y.a;
	tg.b= b-y.b;
	tg.c= c-y.c;
	return tg;
}

float ptb2::operator--(){
	return (a+b+c)/3;
}

main(){
	ptb2 a,b,k;
	cin>>a>>b;
	k=a-b;
	cout<<a<<endl<<b<<endl;
	cout<<k<<endl;
	cout<<--k;
}
