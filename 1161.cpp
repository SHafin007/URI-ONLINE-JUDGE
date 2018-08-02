#include<iostream>
#include<stdio.h>
using namespace std;


long long  fact(long long n){
	long long f;
	
	if(n==0){
	
	  return 1;
}
	else{
	f=n*fact(n-1);
	return f;
}
}

main(){
	long long a,b;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		
		
		//int sum= fact(a)+fact(b);
		cout<<fact(a)+fact(b)<<endl;

}
return 0;
}
