#include<bits/stdc++.h>
using namespace std;

class mangtang{
	private:
		int a[100];
		int n;
	public:
		void nhap();
		void xuat();
};

void mangtang::nhap(){
	int n;
	cout<<"n= "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];		
	}
	
	cout<<"mang chua sap xep la: ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<"  ";
	}
	
}

void mangtang::xuat(){
	int tg;
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}	
	}
	cout<<"mang da sap xep la: ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<"  ";
	}
	
}

main(){
	mangtang m;
	m.nhap();
	m.xuat();
}
