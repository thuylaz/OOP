#include<bits/stdc++.h>
using namespace std;

class mt{
	private:
		int hang, cot;
		int a[100][100];
	public:
		void nhap();
		void xuat();
		mt();
		mt(int hang, int cot, int a[100][100]);
		mt operator-();
};

mt::mt(){
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			a[hang][cot];
		}
	}
}

void mt::nhap(){
	cout<<"so hang= "; cin>>hang;
	cout<<"so cot= "; cin>>cot;
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}

void mt::xuat(){
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<"\n";
	}
}

mt mt::operator-(){
	mt x;
	x.hang=cot;
	x.cot=hang;
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			x.a[i][j]= a[j][i];
		}
	}
	return x;
}

main(){
	mt a;
	a.nhap();
	a.xuat();
	cout<<"ma tran chuyen vi la: "<<endl;
	a=-a;
	a.xuat();
}
