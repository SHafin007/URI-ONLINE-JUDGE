#include<iostream>
using namespace std;
main(){
	int n,f=1;
	cin>>n;
	for(int i=n;i>=1;i--){
		f=f*i;
	}
	cout<<f<<endl;
}
