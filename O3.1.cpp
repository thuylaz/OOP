#include<bits/stdc++.h>
using namespace std;

class arr{
	private:
		float *value;
		int n;
	public:
		arr();
		arr(int n);
		arr operator++();
		arr operator--();
		
		friend istream &operator>>(istream &x, arr &p);
		friend ostream &operator<<(ostream &x, arr p);
};

arr::arr(){
	n=0;
	value=NULL;
}

arr::arr(int n){
	n=n;
	value= new int[n];
	for(int i=0; i<n; i++){
		value[i]=0;
	}
}

arr arr::operator++(){
	arr p= *this;
	for(int i=0; i<p.n-1; i++){
		for(int j=i+1; j<p.n; j++){
			if(p.value[i]>p.value[j]){
				int tg= p.value[i];
				p.value[i]= p.value[j];
				p.value[j]= tg;
			}
		}
	}
	return p;
}

arr arr::operator--(){
	arr p= *this;
	for(int i=0; i<p.n-1; i++){
		for(int j=i+1; j<p.n; j++){
			if(p.value[i]<p.value[j]){
				int tg= p.value[i];
				p.value[i]= p.value[j];
				p.value[j]= tg;
			}
		}
	}
	return p;
}

istream &operator>>(istream &x, arr &p){
	cout<<"n= "; x>>p.n;
	p.value= new float[p.n];
	for(int i=0; i<p.n; i++){
		cout<<"a["<<i<<"]= ";
		x>>p.value[i];
	}
	return x;
}

ostream &operator<<(ostream &x, arr p){
	for(int i=0; i<p.n; i++){
		x<<p.value[i]<<"\t";
	}
	return x;
}

main(){
	arr a;
	ofstream ghi("MANG.txt");
	cin>>a;
	cout<<"so phan tu cua mang la: ";
	cout<<a<<endl;
	ghi<<a;
	cout<<"mang sap xep theo chieu tang dan la: "<<++a;
	ghi<<"mang sap xep theo chieu tang dan la: "<<++a;
	cout<<"\nmang sap xep theo chieu giam dan la: "<<--a;
	ghi<<"mang sap xep theo chieu giam dan la: "<<--a;
}
