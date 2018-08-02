#include<iostream>
#include<iomanip>
using namespace std;
main(){
	int a,b,d,e;
	double c,f;
	cin>>a>>b>>c;
	cin>>d>>e>>f;
	double result =(b*c)+(e*f);
	cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<result<<endl;
	return 0;
}
