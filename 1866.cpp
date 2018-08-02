#include<iostream>
using namespace std;

main(){
	int a, n, temp=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2!=0){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
