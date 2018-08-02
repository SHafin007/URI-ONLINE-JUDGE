#include<iostream>
using namespace std;

main(){
	int x,y,avg=0;
	cin>>x>>y;
	if(x<y){
	
	for(int i=x;i<=y;i++){
		if(i%13==0){
			continue;
			
		}
		avg+=i;
	}
   }else{
   	for(int i=y;i<=x;i++){
		if(i%13==0){
			continue;
			
		}
		avg+=i;
	}
   }
	cout<<avg<<endl;
	return 0;
}
