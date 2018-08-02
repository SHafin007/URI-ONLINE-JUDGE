#include<iostream>
#include<iomanip>
using namespace std;

main(){
	int n; double x,y,z;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if(y==0){
			cout<<"divisao impossivel"<<endl;
		}else{
			z=x/y;
			cout<<fixed<<setprecision(1)<<z<<endl;
		}
	}
	return 0;
}
