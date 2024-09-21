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
		char ngaytl[20];
		friend class truongdh;
};

class truong{
	protected:
		char matr[20];
		char tentr[20];
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
		friend void bonus1(truongdh &t);
};

void truong::nhap(){
	cout<<"ma truong: "; fflush(stdin); gets(matr);
	cout<<"ten truong: "; fflush(stdin); gets(tentr);
	cout<<"dia chi: "; fflush(stdin); gets(dc);
}

void truong::xuat(){
	cout<<"ma truong: "
	<<setw(10)<<matr
	<<setw(15)<<"ten truong: "
	<<setw(12)<<tentr
	<<setw(12)<<"dia chi: "
	<<setw(12)<<dc<<endl;
}

void truongdh::nhap(){
	truong::nhap();
	cout<<"so khoa: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"ma khoa: "; fflush(stdin); gets(x[i].mak);
		cout<<"ten khoa: "; fflush(stdin); gets(x[i].tenk);
		cout<<"truong khoa: "; fflush(stdin); gets(x[i].trk);
	}
	
	cout<<"so ban: "; cin>>m;
	for(int j=0; j<m; j++){
		cout<<"ma ban: "; fflush(stdin); gets(y[j].mab);
		cout<<"ten ban: "; fflush(stdin); gets(y[j].tenb);
		cout<<"ngay thanh lap: "; fflush(stdin); gets(y[j].ngaytl);
	}
	
	
}


void truongdh::xuat(){
	truong::xuat();
	for(int i=0; i<n; i++){
		cout<<"ma khoa: "
			<<setw(12)<<x[i].mak
			<<setw(12)<<"ten khoa: "
			<<setw(12)<<x[i].tenk
			<<setw(12)<<"truong khoa: "
			<<setw(12)<<x[i].trk<<endl;
	}
	
	for(int j=0; j<m; j++){
		cout<<"ma ban: "
		<<setw(12)<<y[j].mab
		<<setw(12)<<"ten ban: "
		<<setw(12)<<y[j].tenb
		<<setw(12)<<"ngay thanh lap: "
		<<setw(12)<<y[j].ngaytl<<endl;
	}
	
}

void bonus1(truongdh &t){
	for(int i=0; i<t.n; i++){
		if(strcmp(t.x[i].mak,"kh01")==0){
			for(int j=i; j<t.n; j++){
				t.x[j]=t.x[j+1];
			}
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
