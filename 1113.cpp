#include<iostream>
using namespace std;
main(){
	int x,y;
	while(1){
	
	cin>>x>>y;
	if(x==y)
	break;
	if(x<y){
		cout<<"Crescente"<<endl;
	}else if(x>y){
		cout<<"Decrescente"<<endl;
	}
}
	
	
}
