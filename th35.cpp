#include<bits/stdc++.h>
using namespace std;

class arr{
	private:
		int *value;
		int n;
	public:
		void nhap();
		void xuat();
		arr();
		arr(int n);
		~arr();
};

arr::arr(){
	n=0;
	value=NULL;
}

arr::arr(int n){
	this->n=n;
	value= new int[n];
	for(int i=0; i<n; i++){
		value[i]=0;
	}
}

arr::~arr(){
	n=0;
	delete[] value;
}

void arr::nhap(){
	if(n==0){
		cout<<"n= ";
		cin>>n;
	}
	if(value==NULL){
		value= new int[n];
	}
	for(int i=0; i<n; i++){
		cout<<"value["<<i<<"]= ";
		cin>>value[i];
	}
}

void arr::xuat(){
	for(int i=0; i<n; i++){
		cout<<value[i]<<"\t";
	}
}

main(){
	arr a(8);
	a.xuat();
	a.nhap();
	a.xuat();
}
