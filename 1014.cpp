#include<iostream>
#include<iomanip>
using namespace std;

main(){
	int a;
	double b;
	cin>>a>>b;
	double result=a/b;
	cout<<fixed<<setprecision(3)<<result<<" km/l"<<endl;
	return 0;
}
