#include<iostream>
using namespace std;
main(){
	long long a;
	int ans=0;
	int index;
	for(int i=1;i<=100;i++){
		cin>>a;
		if(a>0){
		
		if(a>ans){
			ans=a;
			index=i;
		}
	} 
}
	cout<<ans<<endl<<index<<endl;
   
   return 0;
}

