#include<iostream>
using namespace std;

main(){
	long int n,a,in=0,out=0;
	cin>>n;
	
	for(long int i=0;i<n;i++){
		cin>>a;
		
		if(a>=10 && a<=20){
			in++;
		}else{
			out++;
		}
	}
		cout<<in<<" in"<<endl;
		cout<<out<<" out"<<endl;
		
}
