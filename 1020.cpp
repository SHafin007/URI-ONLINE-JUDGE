#include<iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	int year, month, day;
	
	year = n/365;
	cout<<year<<" ano(s)"<<endl;
	year = n%365;
	month = year/30;
	cout<<month<<" mes(es)"<<endl;
	month=year%30;
	day=month;
	cout<<day<<" dia(s)"<<endl;
}
