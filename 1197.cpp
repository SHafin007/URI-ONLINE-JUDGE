#include<iostream>
#include<stdio.h>
using namespace std;

main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		int sum=a*(2*b);
		cout<<sum<<endl;
	}
	return 0;
}
