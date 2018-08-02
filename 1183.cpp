//program to print row wise cloumn wiase




#include<iostream>
#include<iomanip>
using namespace std;

main(){
	int a=12;
	double x[a][a],Above_the_Main_Diagonal=0.0;
	char b;
	cin>>b;
	
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cin>>x[i][j];
		}
	}
	
	for(int i=0; i<a; i++){
		for(int j=0;j<a;j++){
		
		if(i<j){
		
	
			Above_the_Main_Diagonal+=x[i][j];
		}
		}
		
	}
	if(b=='S'){
	
	
	cout<<fixed<<setprecision(1)<<Above_the_Main_Diagonal<<endl;
}else{
	cout<<fixed<<setprecision(1)<<(Above_the_Main_Diagonal)/66.0<<endl;
	
}
	return 0;
}
