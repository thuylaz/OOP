#include<bits/stdc++.h>
using namespace std;

//cha la protected thi con ms ke thua dc
//de kysu ke thua dc person thi dung kysu:public person
class person{
	protected:
		char hoten[20];
		int ngays;
		char que[20];
		//person(char *a, int b, char *c)
};

/*person::person(char *a, int b, char *c){
	strcpy(hoten, a);
	ngays=b;
	strcpy(que, c);
}
*/

class kysu:public person{
	private:
		char nganh[20];
		int namtn;
	public:
		//kysu(char *a, int b, char *c, char *d, int e);
		void nhap();
		void xuat();
};

/*kysu::kysu(char *a, int b, char *c, char *d, int e){
	strcpy(nganh, d);
	namtn= e;
}*/

void kysu::nhap(){
	cout<<"ho ten: "; fflush(stdin); gets(hoten);
	cout<<"ngay sinh: "; cin>>ngays;
	cout<<"que quan: "; fflush(stdin); gets(que);
	
	cout<<"nganh: "; fflush(stdin); gets(nganh);
	cout<<"nam tot nghiep: "; cin>>namtn;
}

void kysu::xuat(){
	cout<<hoten<<setw(12)<<ngays<<setw(12)<<que<<setw(12)<<nganh<<setw(12)<<namtn<<endl;
}

main(){
	kysu a[20];
	int n;
	cout<<"n= "; cin>>n;
	for(int i=0; i<n; i++){
		a[i].nhap();
	}
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
}
