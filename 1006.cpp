#include<iostream>
#include<iomanip>
using namespace std;

main(){
	double a,b,c;
	cin>>a>>b>>c;
	double d=((a*2)+(b*3)+(c*5))/10.0;
	cout<<fixed<<setprecision(1)<<"MEDIA = "<<d<<endl;
	return 0;
}
