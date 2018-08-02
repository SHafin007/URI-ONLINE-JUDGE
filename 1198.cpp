#include<iostream>
#include<stdio.h>
#include <cmath> 

using namespace std;


main(){
	long long a,b;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		long long sum=abs(a-b);
		cout<<sum<<endl;
	}
	return 0;
}
