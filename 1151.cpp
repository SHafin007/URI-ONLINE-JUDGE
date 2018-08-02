#include<iostream>
using namespace std;

main(){
	int f_num=0,s_num=1,next_num,n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		if(i<=1){
			next_num=i;
		}else{
			next_num=f_num+s_num;
			f_num=s_num;
			s_num=next_num;
		}
	
		cout<<next_num;
		if(n-1!=i)
		cout<<" ";
 }
 cout<<endl;
  
	return 0;
}
