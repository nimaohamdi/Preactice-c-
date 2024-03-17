#include <iostream>

using namespace std;

int main(){
	int x;
    cout<<"Enter an integer number:";
	cin>>x;
	if(x>=18 && x<=20)
	  cout<<"A class";
	else
	  if(x>=16 && x<18)
	    cout<<"B class";
	  else
	    if(x>=14 && x<16)
	      cout<<"C class";
	    else
	      cout<<"E class";
}