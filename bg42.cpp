#include<bits/stdc++.h>
using namespace std;

class ps{
	private:
		float ts, ms;
	public:
		void nhap();
		void xuat();
		ps operator+(ps q);
		ps opeartor-();
		float operator++();
};

float ps::operator++(){
	return ts/ms;
}

main(){
	ps p, q;
	ps k=p+q;
	k.xuat();
	k=-k;
	cout<<++k;
}
