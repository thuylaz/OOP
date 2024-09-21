#include<bits/stdc++.h>
using namespace std;

class hhcn{
	private:
		float cd,cr,cc;
	public:
		hhcn();
		hhcn(float a, float b, float c);
		friend istream& operator>>(istream& x, hhcn &y);
		friend ostream& operator<<(ostream& x, hhcn y);
		bool operator+(hhcn y);
		bool operator--();
		
};

hhcn::hhcn(){
	cd=cr=cc=0;
}

hhcn::hhcn(float a, float b, float c){
	cd=a;
	cr=b;
	cc=c;
}

istream& operator>>(istream& x, hhcn &y){
	cout<<"nhap cd,cr,cc: "; x>>y.cd>>y.cr>>y.cc;
	return x;
}

ostream& operator<<(ostream& x, hhcn y){
	x<<y.cd<<y.cr<<y.cc<<endl;
	return x;
}

bool hhcn::operator+(hhcn y){
	if(cd*cr*cc==y.cd*y.cr*y.cc)
		return true;
	else return false;
}

bool hhcn::operator--(){
	if(cd==cr&&cr==cc) return true;
	else return false;
}

main(){
	hhcn a,b;
	cin>>a>>b;
	if(a+b) cout<<"2 hinh the tich = nhau";
	else cout<<"2 hinh the tich k = nhau";
	cout<<endl;
	if(--a) cout<<"a la hlp";
	else cout<<"a k la hlp";
}
