#include<bits/stdc++.h>
using namespace std;

class hcn{
	private:
		int cd, cr, cc;
	public:
		friend istream& operator>>(istream& t, hcn &p);
		friend ostream& operator<<(ostream& t, hcn p);
		bool operator>(hcn b);
};

istream& operator>>(istream& t, hcn &p){
	t>>p.cd>>p.cr>>p.cc;
	return t;
}

ostream& operator<<(ostream& t, hcn p){
	t<<p.cd<<p.cr<<endl;
	return t;
}

bool hcn::operator>(hcn b){
	if(cd*cr*cc>b.cd*b.cr*b.cc) return true;
	else return false;
}

main(){
	hcn a,b;
	cin>>a>>b;
	cout<<a<<b;
	if(a>b) cout<<"a>b";
	else cout<<"a<b";
}
