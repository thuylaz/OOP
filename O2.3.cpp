#include<bits/stdc++.h>
using namespace std;

class truongdh;
class khoa{
	private:
		char mak[20];
		char tenk[20];
		char trk[20];
	friend class truongdh;
	friend void bonus1(truongdh &t);
};

class ban{
	private:
		char mab[20];
		char tenb[20];
		char ngay[20];
	friend class truongdh;
};

class truong{
	protected:
		char mat[20];
		char tent[20];
		char dc[20];
	public:
		void nhap();
		void xuat();
};

class truongdh:public truong{
	private:
		khoa x[20];
		int n;
		ban y[20];
		int m;
	public:
		void nhap();
		void xuat();
	friend void bonus1(truongdh &x);
};

void truong::nhap(){
	cout<<"ma truong: "; 		fflush(stdin); 	gets(mat);
	cout<<"ten truong: "; 		fflush(stdin); 	gets(tent);
	cout<<"dia chi: "; 			fflush(stdin); 	gets(dc);
}

void truong::xuat(){
	cout<<"ma truong: "<<mat<<"\t"; 
	cout<<"ten truong: "<<tent<<"\t"; 
	cout<<"dia chi: "<<dc<<"\t";
}

void truongdh::nhap(){
	truong::nhap();
	cout<<"so khoa: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"ma khoa: ";				fflush(stdin);		gets(x[i].mak);
		cout<<"ten khoa: ";				fflush(stdin);		gets(x[i].tenk);
		cout<<"truong khoa: ";			fflush(stdin);		gets(x[i].trk);
	}
	cout<<"so ban: "; cin>>m;
	for(int j=0; j<m; j++){
		cout<<"ma ban: ";				fflush(stdin);		gets(y[j].mab);
		cout<<"ten ban: ";				fflush(stdin);		gets(y[j].tenb);
		cout<<"ngay thanh lap: ";		fflush(stdin);		gets(y[j].ngay);
	}
}

void truongdh::xuat(){
	truong::xuat();
	for(int i=0; i<n; i++){
		cout<<setw(12)<<"Ma khoa: "
			<<setw(12)<<x[i].mak
			<<setw(12)<<"Ten khoa: "
			<<setw(12)<<x[i].tenk
			<<setw(12)<<"Truong khoa: "
			<<setw(12)<<x[i].trk<<endl;	
	}
	for(int j=0; j<m; j++){
		cout<<setw(12)<<"Ma ban: "
			<<setw(12)<<y[j].mab
			<<setw(12)<<"Ten ban: "
			<<setw(12)<<y[j].tenb
			<<setw(12)<<"Ngay thanh lap: "
			<<setw(12)<<y[j].ngay<<endl;
	}	
}

void bonus1(truongdh &t){
	for(int i=0;i<t.n;i++){
		if(strcmp(t.x[i].mak,"KH01")==0){
			for(int j=i;j<t.n;j++){
				t.x[j]=t.x[j+1];
			}
		t.n--;
		}
	}
}

main(){
	truongdh t;
	t.nhap();
	t.xuat();			
	bonus1(t);
	t.xuat();
}
