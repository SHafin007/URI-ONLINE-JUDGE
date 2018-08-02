#include<iostream>
#include<stdio.h>
using namespace std;

main(){
	int x,y;
	
	while(scanf("%d%d",&x,&y)){
	if(x==0 || y==0){
	
	     break;
	 }
	else if(x>0 && y>0){
		cout<<"primeiro"<<endl;
	}else if(x>0 && y<0){
		cout<<"quarto"<<endl;
	}else if(x<0 && y<0){
		cout<<"terceiro"<<endl;
	}else{
		cout<<"segundo"<<endl;
	}
}
return 0;
}
