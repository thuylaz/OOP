#include<bits/stdc++.h>
using namespace std;

class sv{
	private:
		int masv;
		char hoten[20];
		float diemt;
		float dieml; 
		float diemh;
	public:
		void nhap();
		void xuat();
		friend void sx(sv *a, int n);
		friend void tinhd(sv a[20]);
};

void sv::nhap(){
		cout<<"ma sv: "; cin>>masv;
		cout<<"ho ten: "; fflush(stdin);gets(hoten); 
		cout<<"diem toan: "; cin>>diemt;
		cout<<"diem ly: "; cin>>dieml;
		cout<<"diem hoa: "; cin>>diemh;
	
}

void sv::xuat(){
		cout<<"ma sv: "<<masv
			<<setw(12)<<"ho ten: "<<hoten
			<<setw(12)<<"diem toan: "<<diemt
			<<setw(12)<<"diem ly: "<<dieml
			<<setw(12)<<"diem hoa: "<<diemh
			<<setw(12)<<"diem tong: "<<diemt+dieml+diemh;
}


void sx(sv a[20], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i].diemt+a[i].dieml+a[i].diemh>a[j].diemt+a[j].dieml+a[j].diemh){
				swap(a[i],a[j]);
			}
		}
	}	
}



main(){
	sv a[20];
	int n;
	cout<<"n= "; cin>>n;
	for(int i=0; i<n; i++){
		a[i].nhap();
	}
	sx(a,n);
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
}

