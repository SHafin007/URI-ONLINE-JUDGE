#include<iostream>
using namespace std;

main(){
	
	int x,count;
	for(int i=0;i<5;i++){
		cin>>x;
		if(x%2==0){
		count++;	
		}
	}
	
	cout<<count<<" valores pares"<<endl;
}
