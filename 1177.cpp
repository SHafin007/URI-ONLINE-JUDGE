#include<iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	int i=0,j=0;
	while(i<1000){
		cout<<"N["<<i<<"] = "<<j<<endl;
		i++;
		j++;
		if(n==j){
			j=0;
		}
		 
	}
}
