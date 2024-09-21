#include<bits/stdc++.h>
using namespace std;
class xemay;
class hanghoa;
class nsx
{
	private:
		char tennsx[20];
		char diachi[20];
		friend class hanghoa;
		friend void hienthi(xemay a[100], int n);
	
};
class date
{
	private:
		int d,m,y;
		friend class hanghoa;
};
class hanghoa
{
	protected:
		char nhanhieu[20];
		int dg;
		nsx x;
		date y;
		
	public:
		void nhap();
		void xuat();
		friend void hienthi(xemay a[100], int n);
};
class xemay:public hanghoa
{
	private:
		int congsuat;
		int trongluong;
		int dungtich;
	public:
		void nhap();
		void xuat();
		friend void hienthi(xemay a[100], int n);
		friend void bonus2(xemay a[100], int n);
};
void hanghoa::nhap()
{
	cout<<"nhap nhan hieu: ";				fflush(stdin);gets(nhanhieu);
	cout<<"nhap ten nsx: ";					fflush(stdin);gets(x.tennsx);
	cout<<"nhap dia chi: ";					fflush(stdin);gets(x.diachi);
	cout<<"Ngay/thang/nam: ";				cin>>y.d>>y.m>>y.y;
	cout<<"nhap don gia: ";					cin>>dg;	
}
void hanghoa::xuat()
{
	cout<<"ten nsx "<<x.tennsx
		<<"    dia chi "<<x.diachi
		<<"    Ngay/thang/nam "<<y.d<<y.m<<y.y
		<<"    nhan hieu "<<nhanhieu
		<<"    don gia "<<dg<<endl;
}
void xemay::nhap()
{
	hanghoa::nhap();
	cout<<"nhap cong suat: ";		cin>>congsuat;
	cout<<"nhap trong luong: ";		cin>>trongluong;
	cout<<"nhap dung tich: ";		cin>>dungtich;
}
void xemay::xuat()
{
	hanghoa::xuat();
	cout<<"cong suat"<<congsuat
		<<setw(15)<<"trong luong"<<trongluong
		<<setw(15)<<"dung tich"<<dungtich;
}
void hienthi(xemay a[100], int n)
{
	int dem=0;
	for(int i=0; i<n; i++){
		if(strcmp(a[i].x.tennsx,"hn")==0)
		a[i].xuat();
		dem++;		
	}
	if(dem==0)
	cout<<"khong co ten honda";
}

void bonus2(xemay a[100], int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(strcmp(a[i].nhanhieu,"lead")==0)
		dem++;
		
	}
	if(dem==0) cout<<"k co lead";
	else {
		for(int i=0; i<n; i++){
			if(strcmp(a[i].nhanhieu,"lead")==0){
			
				for(int j=i; j<n-1; j++){
					a[j]=a[j+1];
				}
				n--;
			}
		}
	}
	
}

int main(){
	xemay a[100];
	int n;
	do{
		cout<<"n= ";cin>>n;
	}while(n<=1 || n>=100);
	
	for(int i=0; i<n; i++){
		a[i].nhap();
	}
	for(int i=0; i<n; i++)
		a[i].xuat();
	hienthi(a,n);
	bonus2(a,n);
	for(int i=0; i<n; i++)
		a[i].xuat();
}


/*
2
nsx1
hn
honda
22
9
2003
4
5
6
7
lead
nd
leadd
22
2
2006
49
7
2
1

*/
