#include<iostream>
#include<iomanip>
using namespace std;

main(){
	double number,sum=0.0;
	int count=0;
	for(int i=0;i<6;i++){
		cin>>number;
		if(number>0){
			sum+=number;
			count++;
		}
	}
	sum=sum/(double)count;
	cout<<count<<" valores positivos"<<endl;
	cout<<fixed<<setprecision(1)<<sum<<endl;
	
	
	
}
