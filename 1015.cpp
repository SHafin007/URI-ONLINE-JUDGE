#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

main(){
	double x1,x2,y1,y2,r1,r2,result;
	cin>>x1>>y1>>x2>>y2;
	//r1=pow((x2-x1),2);
	//r2=pow((y2-y1),2);
	
	result=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
	cout<<fixed<<setprecision(4)<<result<<endl;
}
