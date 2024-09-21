#include<bits/stdc++.h>
using namespace std;

class hang;
class date{
	private:
		int d, m, y;
		friend class hang;
		friend void in(hang a[20], int n);
};

class hang{
	private:
		char mah[20];
		char tenh[20];
		date x;
	public:
		void nhap();
		void xuat();
		friend void in(hang a[20], int n);
};

void hang::nhap(){
	cout<<"ma hang: "; fflush(stdin); gets(mah);
	cout<<"ten hang: "; fflush(stdin); gets(tenh);
	cout<<"ngay: "; cin>>x.d;
	cout<<"thang: "; cin>>x.m;
	cout<<"nam: "; cin>>x.y;

}

void hang::xuat(){
	cout<<mah<<setw(10)<<tenh<<setw(10)<<x.d
	<<setw(10)<<x.m<<setw(10)<<x.y<<endl;
}

void in(hang a[20], int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(a[i].x.y==2017){
			dem++;
		}
	}
	if(dem!=0){
		for(int i=0; i<n; i++){
			if(a[i].x.y==2017){
				a[i].xuat();
			}
		}
	}else cout<<"k co gtri";
}

main(){
	hang a[20];
	int n;
	cout<<"n= "; cin>>n;
	for(int i=0; i<n; i++){
		a[i].nhap();
	}
	in(a,n);
}
