#include<bits/stdc++.h>
using namespace std;

struct sv{
	char msv[20];
	char ten[20];
	int diem;
};

struct node{
	sv infor;
	node *next;
};

typedef node *tro;
tro l;

void ini(tro &l){
	l=NULL;
}

int ktrong(tro l){
	return l==NULL;
}



void nhap(sv &s){
	cout<<"msv: "; fflush(stdin); gets(s.msv);
	if(strcmp(s.msv,"***")==0) return;
	cout<<"ten: "; fflush(stdin); gets(s.ten);
	cout<<"diem: "; cin>>s.diem;
}

void nhapds(tro &l){
	ini(l);
	sv s;
	tro q,p;//2 con tro tro dau danh sach
	do{
		nhap(s);
		if(strcmp(s.msv,"***")==0) return;
		p=new (node);
		p->infor=s;
		p->next=NULL;//set node sau p= null
		if(l==NULL)	l=p;//neu con tro dau ds=null thi l=p
		else q->next=p;//ngc lai next cua q=p
		q=p;		
	}while(1);	
}

void hienthi(tro l){
	tro p;
	p=l;
	cout<<"msv"
		<<setw(10)<<"ten"
		<<setw(10)<<"diem"<<endl;
	
	while(p!=NULL){
		cout<<p->infor.msv
			<<setw(10)<<p->infor.ten
			<<setw(10)<<p->infor.diem<<endl;
		p=p->next;
	}
}

main(){
	tro l;
	nhapds(l);
	hienthi(l);
}

