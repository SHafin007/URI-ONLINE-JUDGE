#include<iostream>
using namespace std;

main(){
	int i,j;
	for( i=1, j=60;j<=60;i=(i+3),j=j-5){
		cout<<"I="<<i<<" "<<"J="<<j<<endl;
		if(j==0)
		break;
	}
	return 0;
}
