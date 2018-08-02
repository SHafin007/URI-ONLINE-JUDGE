#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

main(){
	int a,n;
	cin>>n;
	int C=0, R=0, S=0, total=0;
	string s;
	for(int i=0;i<n;i++){
		cin>>a>>s;
		if(s=="C"){
			C+=a;
		}
		else if(s=="R"){
			R+=a;
		}else if(s=="S"){
			S+=a;
		}
	}
	total=C+R+S;
	double x,y,z;
	x=double(C*100.00)/double(total);
	y=double(R*100.00)/double(total);
	z=double(S*100.00)/double(total);
	cout<<"Total: "<<total<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<C<<endl;
	cout<<"Total de ratos: "<<R<<endl;
	cout<<"Total de sapos: "<<S<<endl;
	cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<x<<" %"<<endl;
	cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<y<<" %"<<endl;
	cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<z<<" %"<<endl;
	
}
