#include<iostream>
#include<math.h>
using namespace std;

main(){
	long int x;
	cin>>x;
	
	for(int i=1;i<=x;i++){
		if(i%2==0 && x!=5&&x<2000){
			cout<<i<<"^2 = "<<i*i<<endl;
		}
	}
}
