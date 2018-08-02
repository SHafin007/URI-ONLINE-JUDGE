#include<iostream>
#include<iomanip>
using namespace std;

main(){
	int x;
	double a,b,c,avg=0.0,total=0.0;
	cin>>x;
	for(int i=1;i<=x;i++){
		
		cin>>a>>b>>c;
		total=a*2.0+b*3.0+c*5.0;
	    avg=total/10.0;
		cout<<fixed<<setprecision(1)<<avg<<endl;
	
	}
	return 0;
}
