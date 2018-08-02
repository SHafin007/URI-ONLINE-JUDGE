#include<iostream>
#include<iomanip>
using namespace std;

main(){
	int a=12,z;
	cin>>z;
	double x[a][a],col=0.0;
	char y;
	cin>>y;
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cin>>x[i][j];
		}
	}
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(j==z){
				col+=x[i][j];
			}
		}
	}
	
	if(y=='S'){
		cout<<fixed<<setprecision(1)<<col<<endl;
	}else{
		cout<<fixed<<setprecision(1)<<(col)/12.0<<endl;
	}
	return 0;
}
