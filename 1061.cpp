#include<iostream>
#include<string>
using namespace std;

main(){
	int d1,d2,h1,h2,m1,m2,s1,s2, _1st_day, _2nd_day,day,hr,min,sec;
	string _d1,_d2,_h1,_h2,_m1,_m2; // this string only :
	cin>>_d1>>d1;
	cin>>h1>>_h1>>m1>>_m1>>s1;
	
	cin>>_d2>>d2;
	cin>>h2>>_h2>>m2>>_m2>>s2;

	
	_1st_day= s1+(m1*60)+(h1*(60*60))+(d1*(24*60*60));
	_2nd_day= s2+(m2*60)+(h2*(60*60))+(d2*(24*60*60));
	
	int n=0;
	
	
	
	n=_2nd_day-_1st_day;

	
	day =  n/86400;
	n   =  n%86400;
	hr  =  n/3600;
	n   =  n%3600;
	min =  n/60;
	sec =  n%60;
	
	
	cout<<day<<" dia(s)"<<endl;
	cout<<hr<<" hora(s)"<<endl;
	cout<<min<<" minuto(s)"<<endl;
	cout<<sec<<" segundo(s)"<<endl;
	
}
