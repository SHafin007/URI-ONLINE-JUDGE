#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;


main(){
	double a,b,c;
	cin>>a>>b>>c;
	
	double r,s,t;
	
	r=sqrt((b*b)-(4*a*c));
	s=(-b+r)/(2.0*a);
	t=(-b-r)/(2.0*a);
	if(a>0 && r>0){
		cout<<fixed<<setprecision(5)<<"R1 = "<<s<<endl;
		cout<<fixed<<setprecision(5)<<"R2 = "<<t<<endl;
	}else{
		cout<<"Impossivel calcular"<<endl;
	}
	
	
}
