#include<iostream>
using namespace std;

main(){
	int t, a[5],count=0;
	cin>>t;
	for(int i=0;i<5;i++){ 
		cin>>a[i];
		if(a[i]==t){
			count++;
		}
	}
	cout <<count<<endl;
	
}
