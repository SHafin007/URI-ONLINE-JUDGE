#include<iostream>
#include<iomanip>
using namespace std;

main(){
	double salary,sum,n;
	cin>>salary;
	
	if(salary>=0 && salary<=400.00){
		sum =(salary*15)/100.00;
		n=salary+sum;
		
		cout<<fixed<<setprecision(2)<<"Novo salario: "<<n<<endl;
		cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<sum<<endl;
		cout<<"Em percentual: "<<"15 %"<<endl;
	}
	else if(salary>=400.01 && salary<=800.00){
		sum =(salary*12)/100.00;
		n=salary+sum;
		
		cout<<fixed<<setprecision(2)<<"Novo salario: "<<n<<endl;
		cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<sum<<endl;
		cout<<"Em percentual: "<<"12 %"<<endl;
	}
	else if(salary>=800.01 && salary<=1200.00){
		sum =(salary*10)/100.00;
		n=salary+sum;
		
		cout<<fixed<<setprecision(2)<<"Novo salario: "<<n<<endl;
		cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<sum<<endl;
		cout<<"Em percentual: "<<"10 %"<<endl;
	}
	else if(salary>=1200.01 && salary<=2000.00){
		sum =(salary*7)/100.00;
		n=salary+sum;
		
		cout<<fixed<<setprecision(2)<<"Novo salario: "<<n<<endl;
		cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<sum<<endl;
		cout<<"Em percentual: "<<"7 %"<<endl;
	}else{
		sum =(salary*4)/100.00;
		n=salary+sum;
		
		cout<<fixed<<setprecision(2)<<"Novo salario: "<<n<<endl;
		cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<sum<<endl;
		cout<<"Em percentual: "<<"4 %"<<endl;
	}
}
