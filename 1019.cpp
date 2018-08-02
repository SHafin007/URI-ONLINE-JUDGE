#include<iostream>
using namespace std;


main(){
	int H,M,S;
    cin>>S;
    M=S/60;
    S=S%60;
    H=M/60;
    M=M%60;
    
    cout<<H<<":"<<M<<":"<<S<<endl;
}
