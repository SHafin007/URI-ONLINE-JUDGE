#include<iostream>
#include<stdio.h>
using namespace std;

main(){
	int n,x,i;
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>x;
		for( i=2;i<=x-1;i++){
			if(x%i==0){
				break;
			}
		}
		 if(x==i){
				cout<<x<<" eh primo"<<endl;
			}else{
				cout<<x<<" nao eh primo"<<endl;
			}
	}
	return 0;
}
