//#include<iostream>
//#include <stdlib.h>
//using namespace std;
//
//main(){
//	long int a,b,c,d,e=0;
//	cin>>a>>b;
//	if(abs(a)==abs(b)){
//		cout<<e<<endl;
//	}else{
//	
//	 c = abs(a)+abs(b);
//	 d =c/2;
//	cout<<d<<endl;
//}
//}


#include<iostream>
using namespace std;

main(){
	int a, b,count=0;
	int min, max;
	cin>>a>>b;
	
	if(a>b){
		max=a;
		min=b;
	}else{
		max=b;
		min=a;
	}
	
	for(int i=min+1;i<max;i++){
		if(i%2!=0 || -i%2!=0){
			count+=i;
		}
	}

	
	cout<<count<<endl;
}
