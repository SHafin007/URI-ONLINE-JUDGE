#include<iostream>
using namespace std;

main(){
	int a,Al=0,Ga=0,Di=0;
	while(cin>>a){
		if(a==4){
			break;
		}
		if(a==1){
			Al++;
		}else if(a==2){
		Ga++;	
		}else if(a==3){
			Di++;
		}
	}
	
	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<Al<<endl;
	cout<<"Gasolina: "<<Ga<<endl;
	cout<<"Diesel: "<<Di<<endl;

}

