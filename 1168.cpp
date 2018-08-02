#include<iostream>
#include<string>
using namespace std;

main(){
	int n;
	string s;
	int a,b,c,d,e,f,g,h,j,k;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>s;
		
		if(s=="1"){
			a+=2;
		}else if(s=="2"){
			b+=5;
		}else if(s=="3"){
			c+=5;
		}else if(s=="4"){
			d+=4;
		}else if(s=="5"){
			e+=5;
		}else if(s=="6"){
			f+=6;
		}else if(s=="7"){
			g+=3;
		}else if(s=="8"){
			h+=7;
		}else if (s=="9"){
			j+=6;
		}else if(s=="0"){
			k+=6;
		}
	}
	
	int total=a+b+c+d+e+f+g+h+j+k;
	cout<<total;
}
