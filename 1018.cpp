#include<iostream>
using namespace std;

main(){
	int a,b,c,d,e,f,g,h;
	cin>>a;
	cout<<a<<endl;
	b=a/100;
	cout<<b<<" nota(s) de R$ 100,00"<<endl;
	/* for 50*/
	b=a%100;
	c=b/50;
	cout<<c<<" nota(s) de R$ 50,00"<<endl;
	
	/* for 20*/
	c=b%50;
	d=c/20;
	cout<<d<<" nota(s) de R$ 20,00"<<endl;
	
	/* for 10*/
	d=c%20;
	e=d/10;
	cout<<e<<" nota(s) de R$ 10,00"<<endl;
	
	/* for 5*/
	e=d%10;
	f=e/5;
	cout<<f<<" nota(s) de R$ 5,00"<<endl;
	
	/* for 2*/
	
	f=e%5;
	g= f/2;
	cout<<g<<" nota(s) de R$ 2,00"<<endl;
	
	/* for 1*/
	h=f%2;
	cout<<h<<" nota(s) de R$ 1,00"<<endl;
	
	return 0;
	
}
