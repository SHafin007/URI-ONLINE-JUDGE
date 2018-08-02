#include<iostream>
using namespace std;
 
main(){
	int ans=1e5+10;
	int n,index;
	cin>> n;
	
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		
		if(a[i]<ans){
			ans=a[i];
			index=i;
		}
		
	}
	cout<<"Menor valor: "<<ans<<endl<<"Posicao: "<<index<<endl;
	
}
