#include<bits/stdc++.h>
using namespace std;

int f(int a, int b){
	if(a==0) return b;	
	else if(a<0) return b+f(a+1,b);
	else{
		if(b==0) return 1;
		else if(b%2==0) return f(a,b/2)*f(a,b/2);
		else return f(a,b/2)*f(a,b/2)*a;
	}
}


int main(){
	int a,b;
    cin>>a>>b;
    cout<<f(a,b);
    return 0;
}
