#include<bits/stdc++.h>
using namespace std;

class sv{
	private:
		char masv[20];
		char hoten[20];
		int tuoi;
	public:
		friend istream& operator>>(istream& x, sv &y);
		friend ostream& operator<<(ostream& x, sv y);
};

istream& operator>>(istream& x, sv &y){
	cout<<"ma sv: "; x.getline(y.masv, 20);
	cout<<"ho ten: "; x.getline(y.hoten, 20);
	cout<<"tuoi: "; x>>y.tuoi;
	return x;
}

ostream& operator<<(ostream& x, sv y){
	x<<setw(20)<<y.masv<<setw(20)<<y.hoten<<setw(20)<<y.tuoi<<endl;
	return x; 
}

main(){
	sv a;
	cin>>a;
	cout<<a;
}
