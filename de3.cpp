#include<bits/stdc++.h>
using namespace std;
/*
class nha{
	protected:
		int dt,nam;
		float kinhphi;

};

class nhact:public nha{
	private:
		int sotang, sophong;
	public: 
		void nhap();
		void xuat();
		friend void dtg(nhact *a, int n);
		friend void phonglon(nhact *a, int n);
};

void nhact::nhap(){
	cout<<"dien tich: "; cin>>dt;
	cout<<"nam xay: "; cin>>nam;
	cout<<"so tang: "; cin>>sotang;
	cout<<"so phong: "; cin>>sophong;
}

void nhact::xuat(){
	cout<<dt
		<<setw(17)<<nam
		<<setw(16)<<sotang
		<<setw(16)<<sophong<<endl;
		
}

void dtg(nhact *a, int n){
	for(int i=0; i<n-i; i++){
		for(int j=i+1; j<n; j++){
			if(a[i].dt<a[j].dt){
				swap(a[i],a[j]);
			}
		}
	}
}

void phonglon(nhact *a, int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(a[i].sophong>5){
			dem++;
			a[i].xuat();
		}	
	}
	if(dem==0) cout<<"k co nha co phong > 5"<<endl;
}

main(){
	nhact *a;
	int n;
	do{
		cout<<"n= "; cin>>n;
	}while(n<=0||n>=20);
	a=new nhact[n];
	for(int i=0; i<n; i++){
		a[i].nhap();
	}
	
	cout<<"giam dan cua dien tich"<<endl;
	cout<<"dien tich: "
			<<setw(14)<<"nam xay: "
			<<setw(14)<<"so tang: "
			<<setw(14)<<"so phong: "<<endl;
	dtg(a,n);		
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
	
		cout<<"nha co so phong > 5"<<endl;
	cout<<"dien tich: "
			<<setw(14)<<"nam xay: "
			<<setw(14)<<"so tang: "
			<<setw(14)<<"so phong: "<<endl;
	phonglon(a,n);	
}
*/

class vecto{
	private:
		float x,y;
	public:
		vecto();
		vecto(float a, float b);
		friend istream& operator>>(istream& x, vecto &y);
		friend ostream& operator<<(ostream& x, vecto y);
		vecto operator-(vecto m);
		vecto operator+(vecto m);
};

vecto::vecto(){
	x=y=0;
}

vecto::vecto(float a, float b){
	x=a; y=b;
}

istream& operator>>(istream& x, vecto &y){
	cout<<"nhap toa do: "; x>>y.x>>y.y;
	return x;
}

ostream& operator<<(ostream& x, vecto y){
	x<<"("<<y.x<<","<<y.y<<")"<<endl;
	return x;
}

vecto vecto::operator-(vecto m){
	vecto z;
	z.x=x-m.x;
	z.y=y-m.y;
	return z;
}

vecto vecto::operator+(vecto m){
	vecto z;
	z.x=x+m.x;
	z.y=y+m.y;
	return z;
}

main(){
	vecto a,b;
	cin>>a>>b;
	cout<<"A"<<a<<endl<<"B"<<b<<endl;
	cout<<"C"<<a-b<<endl;
	cout<<"D"<<a+b<<endl;
}


/*
3
5
4
6
4
8
2
4
3
2
3
4
5

*/

