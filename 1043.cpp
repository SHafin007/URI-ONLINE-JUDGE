#include<iostream>
#include<iomanip>
using namespace std;

main(){
	double a,b,c;
	
	cin>>a>>b>>c;
	
	if(a<b+c && b<a+c && c<a+b){
		cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
	}else{
		cout<<fixed<<setprecision(1)<<"Area = "<< (c*(a+b)/2)<<endl;
	}
}
