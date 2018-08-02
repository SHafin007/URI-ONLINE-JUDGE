#include<iostream>
using namespace std;

main(){
	int a=7,k;
	for(int i=1;i<=10;i=i+2){
		for(int j=1,k=a;j<=3;k--,j++){
			cout<<"I="<<i<<" "<<"J="<<k<<endl;
			
		}
		a=a+2;
	}
}
