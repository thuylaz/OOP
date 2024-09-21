#include<bits/stdc++.h>
using namespace std;

class HCN{
	private:
		float d;
		float r;
	public:
		void nhap();
		void ve();
		float dt();
		float cv();
};

void HCN::nhap(){
	cout<<"chieu dai: "; cin>>d;
	cout<<"chieu rong: "; cin>>r;
}

void HCN::ve(){
	for(int i=0; i<d; i++){
		for(int j=0; j<r; j++){
			if(i==0 || i==d-1 || j==0 || j==r-1){
				cout<<" * ";
			}else{
				cout<<"   ";
			}
		}
		cout<<endl;
	}
}

float HCN::dt(){
	float dt=0;
	dt=d*r;
	
	cout<<"dien tich= "<<dt<<endl;	
}

float HCN::cv(){
	float cv=0;
	cv=(d+r)*2;
	cout<<"chu vi= "<<cv<<endl;
}

 

main(){
	HCN h;
	h.nhap();
	h.ve();
	h.dt();
	h.cv();
}
