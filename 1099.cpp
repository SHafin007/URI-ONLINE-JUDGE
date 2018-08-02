#include<iostream>
using namespace std;

main(){
	int a,b,sum=0,n;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a>>b;
	
	if(a>b){
		for(int i=b+1; i<a; i++){
			if(i%2!=0){
			
			sum+=i;
		}
		}
		cout<<sum<<endl;
		sum=0;
	}else{
		for(int i=a+1;i<b;i++){
			if(i%2!=0){
			
			sum+=i;
		}
		}
		cout<<sum<<endl;
		sum=0;
	}
}
}




/*

using namespace std;

main(){
	int a,b,n,sum=0;
	int min, max;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>b){
			max=a;
			min=b;
		}else{
			min=a;
			max=b;
		}
		
		for(int i=min+1;i<max;i++){
			if(i%2!=0){
				sum+=i;
			}
		
		}
			cout<<sum<<endl;
			sum=0;
	}
}

*/
