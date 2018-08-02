#include<iostream>
#include<iomanip>
using namespace std;


main(){
	double a,b,c,d,e,f,g,h,i,j;
	cin>>a;
	
	if(a <= 2000.00){
		cout<<"Isento"<<endl;
	}else if(a > 2000.00 && a <= 3000.00){
		b=a-2000.00;				// 3000-2000 = 1000;
		c=double(b * 8)/100.00; 	// (1000*8)/100=80
		cout<<fixed<<setprecision(2)<<"R$ "<<c<<endl;
	}else if( a > 3000.00 && a <= 4500.00){
		b=a-2000.00; 				//4500-2000=2500
		c= b-1000;    				// 2500-1000= 1500
		d=b-c;        				//2500-1500=1000
		e=double(d*8)/100.00;		//(1000*8)/100=80
		f=double(c*18)/100.00;		 // (1500*18) / 100= 270
		g=e+f;
		cout<<fixed<<setprecision(2)<<"R$ "<<g<<endl;
	}else{
		b=a-2000.00; 				//5000-2000=3000
		c= b-1000;    				// 3000-1000= 2000
		d=b-c;        				//3000-2000=1000
		e=double(d*8)/100.00;		//(1000*8)/100=80
		f=c-1500;               	// 2000-1500=500
		g=c-f;                  	// 2000-500 =1500
		h= double(g * 18 )/100.00; 	//(1500*18) = 270
		i=double( f * 28 )/100.00;
		j=e+h+i;
		cout<<fixed<<setprecision(2)<<"R$ "<<j<<endl;
	}
}
