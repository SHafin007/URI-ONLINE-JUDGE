#include<iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	string s;
	int a;
	for(int i=0;i<n;i++){
		cin>>s;
		cin>>a;
		if(s=="Thor"){
			cout<<"Y"<<endl;
		}else{
			cout<<"N"<<endl;
		}
	}
}
