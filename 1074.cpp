#include<iostream>
using namespace std;


main(){
	int x,y;
	cin>>x;
	for(int i=1;i<=x;i++){
		cin>>y;
		if(y==0){
			cout<<"NULL"<<endl;
		}else if(y<0&& y%2==0){
		cout<<"EVEN NEGATIVE"<<endl;	
		}else if(y>0&& y%2==0){
			cout<<"EVEN POSITIVE"<<endl;
		}else if(y<0&&y%2!=0){
			cout<<"ODD NEGATIVE"<<endl;
		}else{
			cout<<"ODD POSITIVE"<<endl;
		}
	}
	return 0;
}
