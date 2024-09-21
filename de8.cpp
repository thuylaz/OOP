#include<bits/stdc++.h>
using namespace std;

int ucln(int a, int b){
	if(b==0) return a;
	return ucln(b, a%b);
}

class ps{
	private:
		int ts,ms;
	public:
		ps();
		ps(int x, int y);
		void nhap();
		friend ostream& operator<<(ostream& m, ps n);
		ps operator--();
};

ps::ps(){
	ts=0; ms=1;
}

ps::ps(int x, int y){
	ts=x, ms=y;
}

void ps::nhap(){
	cout<<"ts, ms= "; cin>>ts>>ms;
}

ostream& operator<<(ostream& m, ps n){
	m<<n.ts<<"/"<<n.ms<<endl;
	return m;
}

ps ps::operator--(){
	ps z;
	z.ts=ts/ucln(ts,ms);
	z.ms=ms/ucln(ts,ms);
	return z;
}

main(){
	ps a;
	a.nhap();
	cout<<--a;
}
