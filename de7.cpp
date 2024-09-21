#include<bits/stdc++.h>
using namespace std;

class arr{
	private:
		float *value;
		int n;
	public:
		arr();
		arr(int n);
		void xuat();
		friend istream& operator>>(istream& x, arr &y);
		arr operator--();
};

arr::arr(){
	n=0;
	value=NULL;
}

arr::arr(int n){
	n=n;
	value= new float[n];
	for(int i=0; i<n; i++){
		value[i]=0;
	}
}

istream& operator>>(istream& x, arr &y){
	cout<<"n= "; x>>y.n;
	y.value= new float[y.n];
	for(int i=0; i<y.n; i++){
		cout<<"a["<<i<<"]= "; x>>y.value[i];
	}
	return x;
}

void arr::xuat(){
	for(int i=0; i<n; i++){
		cout<<value[i]<<"\t";
	}
}

arr arr::operator--(){
	arr p=*this;
	for(int i=0; i<p.n-1; i++){
		for(int j=i+1; j<p.n; j++){
			if(p.value[i]>p.value[j]){
				swap(value[i], value[j]);
			}
		}
	}
	return p;
}


main(){
	arr a;
	cin>>a;
	a.xuat();
	--a;
	a.xuat();
}
