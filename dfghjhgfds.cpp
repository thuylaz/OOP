#include<bits/stdc++.h>
using namespace std;

class so{
	private:
		int a,b,c;
	public:
		friend istream& operator>>(istream& x, so &y);
		friend ostream& operator<<(ostream& x, so y);
		so operator--();
		
};

istream& operator>>(istream& x, so &y){
	cout<<"nhap= "; x>>y.a>>y.b>>y.c;
	return x;
}

ostream& operator<<(ostream& x, so y){
	x<<y.a<<y.b<<y.c<<endl;
	return x;
}

so so::operator--(){
	int tg[4]={a,b,c};
	int max=tg[0];
	for(int i=0; i<4; i++)
		if(max<tg[i])
		max=tg[i];
	return max;
	
}

main(){
	so a;
	cin>>a;
	cout<<a;
	cout<<--a;
}
