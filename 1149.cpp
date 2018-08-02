#include<iostream>
#include<stdio.h>
using namespace std;

main(){
	int a,n,sum=0;
	cin>>a;
	while(1){
		cin>>n;
		if(n<=0)
			continue;
			
		for(int i=a; i<a+n; i++){
			sum+=i;
		}
		cout<<sum<<endl;
		break;
	}
}
