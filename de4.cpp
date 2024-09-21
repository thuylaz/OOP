#include<bits/stdc++.h>
using namespace std;

/*class xe{
	protected:
		char bienso[20], mauson[20], noidk[20];
		int namdk;
	public:
		xe();
		xe(char *a, char *b, char *c, int d);
		~xe();
		void nhap();
		void xuat();
};

class chu:public xe{
	private:
		char tenchu[20];
		int cmt;
	public:
		chu();
		chu(char *a, char *b, char *c, int d, char *e, int f);
		~chu();
		void nhap();
		void xuat();
		friend void dkxe(chu *a, int n);
};

xe::xe(){
	strcmp(bienso,"");
	strcmp(mauson,"");
	strcmp(noidk,"");
	namdk=0;
}

xe::xe(char *a, char *b, char *c, int d){
	strcmp(bienso,a);
	strcmp(mauson,b);
	strcmp(noidk,c);
	namdk=d;
}

xe::~xe(){
	strcpy(bienso,"");
	strcpy(mauson,"");
	strcpy(noidk,"");
	namdk=0	;
}

void xe::nhap(){
	cout<<"bien so: "; fflush(stdin); gets(bienso);
	cout<<"mau son: "; fflush(stdin); gets(mauson);
	cout<<"noi dang ky"; fflush(stdin); gets(noidk);
	cout<<"nam dang ky: "; cin>>namdk;
}

void xe::xuat(){
	cout<<bienso
		<<setw(17)<<mauson
		<<setw(14)<<noidk
		<<setw(14)<<namdk<<setw(14);
		
		
}

chu::chu(){
	strcpy(tenchu,"");
	cmt=0;
}

chu::chu(char *a, char *b, char *c, int d, char *e, int f):xe(a, b, c, d){
	strcmp(tenchu,e);
	cmt=f;
}

chu::~chu(){
	strcpy(tenchu,"");
	cmt=0;
}

void chu::nhap(){
	xe::nhap();
	cout<<"ten chu: "; fflush(stdin); gets(tenchu);
	cout<<"chung minh thu: "; cin>>cmt;
}

void chu::xuat(){
	xe::xuat();
	cout<<tenchu
		<<setw(17)<<cmt<<endl;
}

void dkxe(chu *a, int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(strcmp(a[i].noidk,"hn")==0){
			dem++;
			a[i].xuat();
		}
	}
	if(dem==0) cout<<"k xe nao dk o ha noi"<<endl;
}

main(){
	chu *k;
	int n;
	cout<<"n= "; cin>>n;
	k= new chu[n];
	for(int i=0; i<n; i++){
		k[i].nhap();
	}
	cout<<"bien so: "
			<<setw(14)<<"mau son: "
			<<setw(14)<<"noi dang ky: "
			<<setw(14)<<"nam dang ky: "
			<<setw(14)<<"ten chu: "
			<<setw(14)<<"cmt: "<<endl;
	for(int i=0; i<n; i++){
		k[i].xuat();
	}
	
	cout<<"xe dk o ha noi"<<endl;
	cout<<"bien so: "
			<<setw(14)<<"mau son: "
			<<setw(14)<<"noi dang ky: "
			<<setw(14)<<"nam dang ky: "
			<<setw(14)<<"ten chu: "
			<<setw(14)<<"cmt: "<<endl;
		dkxe(k,n);		
}*/

class vecto{
	private:
		int n;
		float *a;
	public:
		vecto();
		vecto(int m, float *b);
		~vecto();
		friend istream& operator>>(istream& x, vecto &y);
		friend ostream& operator<<(ostream& x, vecto y);
		float operator++();
		float operator--();
		
};

vecto::vecto(){
	n=0; a=NULL;
}

vecto::vecto(int n, float *a){
	this->n=n;
	this->a= new float[n];
	for(int i=0; i<n; i++){
		this->a[i]=a[i];
	}
}

vecto::~vecto(){
	n=0; delete[] a;
}

istream& operator>>(istream& x, vecto &y){
	cout<<"n= "; x>>y.n;
	y.a=new float[y.n];
	for(int i=0; i<y.n; i++){
		cout<<"a["<<i<<"]= ";
		x>>y.a[i];
	}
	return x;
}

ostream& operator<<(ostream& x, vecto y){
	for(int i=0; i<y.n; i++){
		x<<y.a[i]<<"\t";
	}
	return x;
}

float vecto::operator++(){
	float max=a[0];
	for(int i=0; i<n; i++){
		if(a[i]>max)
		max=a[i];
	}
	return max;
}

float vecto::operator--(){
	float min=a[0];
	for(int i=0; i<n; i++){
		if(a[i]<min)
		min=a[i];
	}
	return min;
}

main(){
	vecto a;
	cin>>a;
	cout<<a<<endl;
	cout<<"max= "<<++a<<endl;
	cout<<"min= "<<--a;
}

/*
3
b1
do
nd
2020
thuy
233445
b2
xanh
hy
2021
nhung
23445
b3
den
hn
2018
thien
23345

*/

