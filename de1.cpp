#include<bits/stdc++.h>
using namespace std;

class person{
	protected:
		char hoten[50], que[100];
		int d,m,y;
	
};

class vandongvien:public person{
	protected:
		char bomon[30];
		float thunhap;
	
};

class cauthu:public vandongvien{
	private:
		char clb[100], vtri[100];
	public:
		void nhap();
		void xuat();
		friend void search(cauthu *a, int n);
		friend void max(cauthu *a, int n);
		

};

void cauthu::nhap(){
	cout<<"ho ten: "; fflush(stdin); gets(hoten);
	cout<<"que quan: "; fflush(stdin); gets(que);
	cout<<"bo mon: "; fflush(stdin); gets(bomon);
	cout<<"thu nhap: "; cin>>thunhap;
	cout<<"clb: "; fflush(stdin); gets(clb);
	cout<<"vi tri: "; fflush(stdin); gets(vtri);
}

void cauthu::xuat(){
	cout<<"ho ten: "<<hoten
		<<setw(13)<<"que quan: "<<que
		<<setw(13)<<"bo mon: "<<bomon
		<<setw(13)<<"thu nhap: "<<thunhap
		<<setw(13)<<"clb: "<<clb
		<<setw(13)<<"vi tri: "<<vtri<<endl;
}

void search(cauthu *a, int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(strcmp(a[i].clb,"c1")==0){
			a[i].xuat();
			dem++;
		}
	}
	if(dem==0) cout<<"k co cau thu o clb c1";	
}

void max(cauthu *a, int n){
	float max=0;
	for(int i=0; i<n; i++){
		max=a[0].thunhap;
		if(a[i].thunhap>max)
			max=a[i].thunhap;		
	}
	for(int i=0; i<n; i++){
		if(a[i].thunhap==max)
			a[i].xuat();
		
	}
}

main(){
	cauthu *a;
	int n;
	do{
		cout<<"n= "; cin>>n;
	}while(n<=0||n>=50);
	
	a=new cauthu[n];
	for(int i=0; i<n; i++){
		a[i].nhap();
	}
	
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
	cout<<"thong tin cthu c2 la: ";
	search(a,n);
	cout<<"cau thu co luong cao nhat";
	max(a,n);
}

/*
3
thuy
nd
caulong
4
c1
main
nhung
hn
bong
857
c2
phu
thien
hy
theduc
75
c3
main

*/

