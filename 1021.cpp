#include<iostream>
#include <cmath>
using namespace std;

main(){
	double n;
	cin>>n;
	double a,b,c,d,e,f,g,h,i,j,k,l;
	
	cout<<"NOTAS:"<<endl;
	
	/* for 100 */
	a=n/100.00;
	int _a=a;
	cout<<_a<<" nota(s) de R$ 100.00"<<endl;
	a=fmod(n,100.00);
	
	/* for 50 */
	b=a/50.00;
	int _b=b;
	cout<<_b<<" nota(s) de R$ 50.00"<<endl;
	b=fmod(a,50.00);
	
	/* for 20 */
	c=b/20.00;
	int _c=c;
	cout<<_c<<" nota(s) de R$ 20.00"<<endl;
	c=fmod(b,20.00);
	
	/* for 10 */	
	d= c/10.00;
	int _d=d;
	cout<<_d<<" nota(s) de R$ 10.00"<<endl;	
	d=fmod(c,10.00);
	
	/* for 5 */
	e= d/5.00;
	int _e=e;
	cout<<_e<<" nota(s) de R$ 5.00"<<endl;
	e= fmod(d,5.00);
	
	/* for 2 */
	f=e/2.00;
	int _f =f;
	cout<<_f<<" nota(s) de R$ 2.00"<<endl;
	f= fmod(e,2.00);
	
	cout<<"MOEDAS:"<<endl;
	
	/* for 1 */
	g=f/1.00;
	int _g =g;
	cout<<_g<<" moeda(s) de R$ 1.00"<<endl;
	g=fmod(f,1.00);
	
	/* for .50 */
	h=g/0.50;
	int _h=h;
	cout<<_h<<" moeda(s) de R$ 0.50"<<endl;
	h=fmod(g, 0.50);
	
	/* for .25 */
	i=h/0.25;
	int _i=i;
	cout<<_i<<" moeda(s) de R$ 0.25"<<endl;
	i=fmod(h, 0.25);
	
	/* for .10 */
	j=i/0.10;
	int _j=j;
	cout<<_j<<" moeda(s) de R$ 0.10"<<endl;
	j=fmod(i, 0.10);
	
	/* for .05 */
	k=j/0.05;
	int _k= k;
	cout<<_k<<" moeda(s) de R$ 0.05"<<endl;
	k=fmod(j, 0.05);
	
	/* for .01 */
	l=k/0.01;
	int _l=l;
	cout<<_l<<" moeda(s) de R$ 0.01"<<endl;
	
	return 0;
	
}
