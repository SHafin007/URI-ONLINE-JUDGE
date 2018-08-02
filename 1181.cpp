#include<iostream>
#include<iomanip>
using namespace std;

main(){
	int z;
	cin>>z;
	int a=12;
	double x[a][a],row=0.0;
	char y;
	cin>>y;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cin>>x[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(i==z){
				row+=x[i][j];
			}
		}
	}
	if(y=='S'){
	cout<<fixed<<setprecision(1)<<row<<endl;
     }else{
     	cout<<fixed<<setprecision(1)<<(row)/12.0<<endl;
	 }
	 
	 return 0;
}
