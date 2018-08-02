#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a,b;
	double c,d;
	cin>>a>>b>>c;
	d=b*c;
	
	cout<<"NUMBER = "<<a<<endl;
	cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<d<<endl;
	return 0;
}
