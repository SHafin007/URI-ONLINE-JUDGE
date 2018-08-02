#include<iostream>
#include<iomanip>
using namespace std;


main(){
	int a=12;
	double x[a][a],sum=0.0;
	char p;
	cin>>p;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cin>>x[i][j];
		}
	}
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(i<j && (i+j)<11)
				sum+=x[i][j];
			
		}
			
		
	}
	
	if(p=='S'){
		cout<<fixed<<setprecision(1)<<sum<<endl;
	}
	else{
		cout<<fixed<<setprecision(1)<<(sum)/30.0<<endl;
	}
	return 0;
}
