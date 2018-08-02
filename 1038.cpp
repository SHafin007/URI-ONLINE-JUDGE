#include<iostream>
#include<iomanip>
using namespace std;


main(){
     int x,y;
     double sum=0;
     cin>>x>>y;
     
     
     if(x==1){
     	sum=4.00*(double)y;
     	cout<<fixed<<setprecision(2)<<"Total: R$ "<<sum<<endl;
	 }else if(x==2){
	 	sum=4.5*(double)y;
	 	cout<<fixed<<setprecision(2)<<"Total: R$ "<<sum<<endl;
	 }else if(x==3){
	 	sum=5.00*(double)y;
	 	cout<<fixed<<setprecision(2)<<"Total: R$ "<<sum<<endl;
	 }else if(x==4){
	 	sum=2.00*(double)y;
	 	cout<<fixed<<setprecision(2)<<"Total: R$ "<<sum<<endl;
	 }else{
	 	sum=1.50*(double)y;
	 	cout<<fixed<<setprecision(2)<<"Total: R$ "<<sum<<endl;
	 }
	 
	 
	 return 0;
}
