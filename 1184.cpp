#include<iostream>
#include<iomanip>
using namespace std;


main(){
	
	int a=12;
	char p;
	double x[a][a],Below_the_Main_Diagonal=0.0;
	cin>>p;
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cin>>x[i][j];
		}
	}
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(i>j){
				Below_the_Main_Diagonal+=x[i][j];
			}
		}
	}
	if(p=='S'){
		cout<<fixed<<setprecision(1)<<Below_the_Main_Diagonal<<endl;
	}else{
		cout<<fixed<<setprecision(1)<<(Below_the_Main_Diagonal)/66.0<<endl;
	}
	
	return 0;
}
