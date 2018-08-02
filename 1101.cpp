#include<iostream>
#include<stdio.h>
using namespace std;

main(){
	int x,y,avg=0,i;
	while(scanf("%d %d",&x, &y)){
		avg=0;
		if(x<=0 || y<=0){
			break;
		}else{
		 if(x<y){
			for(i=x;i<=y;i++){
				cout<<i<<" ";
				avg+=i;
			}
			cout<<"Sum="<<avg<<endl;
		}else if(x>y){
			for(i=y;i<=x;i++){
				cout<<i<<" ";
				avg+= i;
			}
			cout<<"Sum="<<avg<<endl;
		}
	}
  }
	return 0;
}
