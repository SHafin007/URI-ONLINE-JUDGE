#include<iostream>
#include <algorithm>
using namespace std;

main(){
	int temp=0;
	
	
	int a[3];
	int b[3];
	
	
	for(int i=0;i<3;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
	
	for(int i=0;i<3;i++){
		cout<<a[i]<<endl;
	}
	cout<<endl;
	for(int i=0;i<3;i++){
		cout<<b[i]<<endl;
	}
}
