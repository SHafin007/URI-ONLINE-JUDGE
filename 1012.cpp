#include<iostream>
#include<iomanip>
using namespace std;

main(){
	
	double a,b,c, pi=3.14159;
	double tri,cir,tra,sqr,ret;
	cin>>a>>b>>c;
	tri=a*c*.5;
	cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<tri<<endl;
	
	cir=pi*c*c;
	cout<<fixed<<setprecision(3)<<"CIRCULO: "<<cir<<endl;
	
	tra=(.5*(a+b))*c;
	cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<tra<<endl;
	
	sqr=b*b;
	cout<<fixed<<setprecision(3)<<"QUADRADO: "<<sqr<<endl;
	
	ret=a*b;
	cout<<fixed<<setprecision(3)<<"RETANGULO: "<<ret<<endl;
}

